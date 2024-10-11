import streamlit as st
import pandas as pd
from sqlalchemy import create_engine, Column, Integer, String, DateTime, LargeBinary, Float, Boolean
from sqlalchemy.orm import declarative_base, sessionmaker
from datetime import datetime, timedelta
import networkx as nx
import matplotlib.pyplot as plt
from fastapi import FastAPI, File, UploadFile
from fastapi.middleware.cors import CORSMiddleware
import uvicorn
from pydantic import BaseModel
import face_recognition
import io
import base64
import requests
import numpy as np
import os
import threading
import time

# Database setup
Base = declarative_base()
db_path = 'security_system.db'
engine = create_engine(f'sqlite:///{db_path}')
Session = sessionmaker(bind=engine)

class Detection(Base):
    _tablename_ = 'detections'
    id = Column(Integer, primary_key=True)
    camera_id = Column(String(50), nullable=False)
    timestamp = Column(DateTime, nullable=False)
    person_name = Column(String(100), nullable=False)
    top = Column(Integer, nullable=False)
    right = Column(Integer, nullable=False)
    bottom = Column(Integer, nullable=False)
    left = Column(Integer, nullable=False)
    latitude = Column(Float, nullable=True)
    longitude = Column(Float, nullable=True)

class KnownFace(Base):
    _tablename_ = 'known_faces'
    id = Column(Integer, primary_key=True)
    name = Column(String(100), nullable=False)
    encoding = Column(LargeBinary, nullable=False)

class Camera(Base):
    _tablename_ = 'cameras'
    id = Column(String(50), primary_key=True)
    latitude = Column(Float, nullable=False)
    longitude = Column(Float, nullable=False)

class ConnectedCamera(Base):
    _tablename_ = 'connected_cameras'
    id = Column(String(50), primary_key=True)
    last_seen = Column(DateTime, nullable=False)
    is_connected = Column(Boolean, default=True)

# Create tables
if not os.path.exists(db_path):
    Base.metadata.create_all(engine)
    print(f"Database created at {db_path}")
else:
    print(f"Database already exists at {db_path}")

# FastAPI setup
app = FastAPI()
app.add_middleware(
    CORSMiddleware,
    allow_origins=["*"],
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)

class DetectionData(BaseModel):
    camera_id: str
    timestamp: str
    person_name: str
    bounding_box: dict
    latitude: float
    longitude: float

@app.post("/add_detection")
async def add_detection(data: DetectionData):
    session = Session()
    try:
        new_detection = Detection(
            camera_id=data.camera_id,
            timestamp=datetime.fromisoformat(data.timestamp),
            person_name=data.person_name,
            top=data.bounding_box['top'],
            right=data.bounding_box['right'],
            bottom=data.bounding_box['bottom'],
            left=data.bounding_box['left'],
            latitude=data.latitude,
            longitude=data.longitude
        )
        session.add(new_detection)
        
        # Update connected camera status
        connected_camera = session.query(ConnectedCamera).filter_by(id=data.camera_id).first()
        if connected_camera:
            connected_camera.last_seen = datetime.now()
            connected_camera.is_connected = True
        else:
            new_connected_camera = ConnectedCamera(id=data.camera_id, last_seen=datetime.now())
            session.add(new_connected_camera)
        
        session.commit()
        print(f"Detection added: {data.person_name} at {data.timestamp}")  # Debug print
        return {"message": "Detection added successfully"}
    except Exception as e:
        session.rollback()
        print(f"Error adding detection: {e}")  # Debug print
        return {"message": f"Error adding detection: {str(e)}"}
    finally:
        session.close()

@app.post("/add_known_face")
async def add_known_face(name: str, file: UploadFile = File(...)):
    contents = await file.read()
    image = face_recognition.load_image_file(io.BytesIO(contents))
    encoding = face_recognition.face_encodings(image)[0]
    
    session = Session()
    try:
        new_face = KnownFace(name=name, encoding=encoding.tobytes())
        session.add(new_face)
        session.commit()
        print(f"Known face added: {name}")  # Debug print
        return {"message": "Known face added successfully"}
    except Exception as e:
        session.rollback()
        print(f"Error adding known face: {e}")  # Debug print
        return {"message": f"Error adding known face: {str(e)}"}
    finally:
        session.close()

@app.get("/get_known_faces")
async def get_known_faces():
    session = Session()
    try:
        known_faces = session.query(KnownFace).all()
        result = [{"name": face.name, "encoding": base64.b64encode(face.encoding).decode()} for face in known_faces]
        print(f"Retrieved {len(result)} known faces")  # Debug print
        return result
    except Exception as e:
        print(f"Error retrieving known faces: {e}")  # Debug print
        return {"message": f"Error retrieving known faces: {str(e)}"}
    finally:
        session.close()

@app.post("/add_camera")
async def add_camera(camera_id: str, latitude: float, longitude: float):
    session = Session()
    try:
        new_camera = Camera(id=camera_id, latitude=latitude, longitude=longitude)
        session.add(new_camera)
        session.commit()
        print(f"Camera added: {camera_id}")  # Debug print
        return {"message": "Camera added successfully"}
    except Exception as e:
        session.rollback()
        print(f"Error adding camera: {e}")  # Debug print
        return {"message": f"Error adding camera: {str(e)}"}
    finally:
        session.close()

def get_detections(person_name, start_time, end_time):
    session = Session()
    try:
        detections = session.query(Detection).filter(
            Detection.person_name == person_name,
            Detection.timestamp.between(start_time, end_time)
        ).order_by(Detection.timestamp).all()
        print(f"Queried detections: {len(detections)}")  # Debug print
        for detection in detections:
            print(f"Detection: {detection.person_name} at {detection.timestamp}")  # Debug print
        return detections
    except Exception as e:
        print(f"Error querying detections: {e}")  # Debug print
        return []
    finally:
        session.close()

def reconstruct_path(detections):
    G = nx.Graph()
    for detection in detections:
        G.add_node(detection.camera_id, pos=(detection.longitude, detection.latitude))

    for i in range(len(detections) - 1):
        G.add_edge(detections[i].camera_id, detections[i+1].camera_id)

    path = [d.camera_id for d in detections]
    return path, G

def visualize_path(G, path):
    pos = nx.get_node_attributes(G, 'pos')
    plt.figure(figsize=(12, 10))
    nx.draw(G, pos, with_labels=True, node_color='lightblue', node_size=500, font_size=8, font_weight='bold')
    
    path_edges = list(zip(path, path[1:]))
    nx.draw_networkx_edges(G, pos, edgelist=path_edges, edge_color='r', width=2)

    labels = {node: f"{node}\n{i+1}" for i, node in enumerate(path)}
    nx.draw_networkx_labels(G, pos, labels, font_size=8)

    plt.title("Person's Path Through Camera Network")
    plt.axis('off')
    plt.tight_layout()

def update_connected_cameras():
    while True:
        session = Session()
        try:
            threshold_time = datetime.now() - timedelta(minutes=1)
            cameras = session.query(ConnectedCamera).all()
            for camera in cameras:
                if camera.last_seen < threshold_time:
                    camera.is_connected = False
            session.commit()
            print("Updated connected cameras status")  # Debug print
        except Exception as e:
            session.rollback()
            print(f"Error updating connected cameras: {e}")  # Debug print
        finally:
            session.close()
        time.sleep(60)  # Check every minute

# Streamlit app
def main():
    st.title('Enhanced Security System Dashboard')

    # Sidebar for navigation
    page = st.sidebar.selectbox("Choose a page", ["Add Known Face", "Add Camera", "Query Detections", "Connected Cameras"])

    if page == "Add Known Face":
        st.header('Add Known Face')
        name = st.text_input('Person Name')
        uploaded_file = st.file_uploader("Choose an image...", type="jpg")
        if uploaded_file is not None and name:
            if st.button('Add Face'):
                files = {'file': uploaded_file}
                response = requests.post(f"http://localhost:8000/add_known_face?name={name}", files=files)
                st.write(response.json())

        st.subheader('Current Known Faces')
        known_faces = requests.get("http://localhost:8000/get_known_faces").json()
        for face in known_faces:
            st.write(face['name'])

    elif page == "Add Camera":
        st.header('Add Camera')
        camera_id = st.text_input('Camera ID')
        latitude = st.number_input('Latitude', format="%.6f")
        longitude = st.number_input('Longitude', format="%.6f")
        if st.button('Add Camera'):
            response = requests.post(f"http://localhost:8000/add_camera?camera_id={camera_id}&latitude={latitude}&longitude={longitude}")
            st.write(response.json())

    elif page == "Query Detections":
        st.header('Query Detections')
        query_name = st.text_input('Person Name to Query')
        start_date = st.date_input('Start Date')
        end_date = st.date_input('End Date')
        if st.button('Query'):
            print(f"Querying for {query_name} between {start_date} and {end_date}")  # Debug print
            detections = get_detections(query_name, start_date, end_date)
            print(f"Received {len(detections)} detections")  # Debug print
            if detections:
                df = pd.DataFrame([(d.camera_id, d.timestamp, d.person_name, d.latitude, d.longitude) for d in detections],
                                  columns=['Camera ID', 'Timestamp', 'Person Name', 'Latitude', 'Longitude'])
                st.write(df)
                
                path, G = reconstruct_path(detections)
                st.write("Reconstructed Path:", path)
                st.write(f"First seen at: {detections[0].camera_id} at {detections[0].timestamp}")
                st.write(f"Last seen at: {detections[-1].camera_id} at {detections[-1].timestamp}")
                
                visualize_path(G, path)
                st.pyplot()
            else:
                st.write('No detections found.')
                print("No detections found in the database")  # Debug print

    elif page == "Connected Cameras":
        st.header('Connected Cameras')
        session = Session()
        connected_cameras = session.query(ConnectedCamera).filter_by(is_connected=True).all()
        session.close()
        
        if connected_cameras:
            for camera in connected_cameras:
                st.success(f"{camera.id} is connected with the Server (Last seen: {camera.last_seen})")
        else:
            st.info("No cameras currently connected.")

if __name__ == "_main_":
    # Start the camera connection update thread
    threading.Thread(target=update_connected_cameras, daemon=True).start()
    
    # Run FastAPI in a separate thread
    threading.Thread(target=uvicorn.run, args=(app,), kwargs={"host": "0.0.0.0", "port": 8000}, daemon=True).start()
    
    # Run Streamlit
    main()