import requests

SERVER_URL = "http://192.168.86.215:8000"

try:
    response = requests.get(f"{SERVER_URL}/get_known_faces", timeout=10)
    response.raise_for_status()
    print(f"Connection successful. Received {len(response.json())} known faces.")
except requests.exceptions.RequestException as e:
    print(f"Connection failed: {e}")