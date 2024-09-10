import unittest
import pandas as pd
import os

class TestMedicinesDataset(unittest.TestCase):

    def test_data_creation(self):
        data = {
            "Serial Number": list(range(1, 16)),
            "Medicine Name": ["Paracetamol", "Amoxicillin", "Metformin", "Amlodipine", "Atorvastatin", 
                              "Ibuprofen", "Pantoprazole", "Cetirizine", "Azithromycin", "Metformin+Glimepiride", 
                              "Aspirin", "Montelukast", "Alprazolam", "Levothyroxine", "Telmisartan"],
            "Disease Treated": ["Fever, Pain Relief", "Bacterial Infections", "Type 2 Diabetes", 
                                "Hypertension", "High Cholesterol", "Pain Relief, Inflammation", 
                                "Acid Reflux, GERD", "Allergies", "Bacterial Infections", "Diabetes", 
                                "Blood Thinning", "Asthma, Allergies", "Anxiety, Panic Disorders", 
                                "Hypothyroidism", "Hypertension"],
            "Price (per unit) (INR)": [2.00, 10.00, 3.50, 5.00, 8.00, 2.50, 7.00, 3.00, 20.00, 6.00, 
                                       1.50, 12.00, 5.00, 3.00, 8.50],
            "Recommended Doses Per Day": ["1-3", "3 (every 8 hours)", "1-3", "1", "1", "1-3", "1", "1", 
                                            "1", "1-2", "1", "1", "1-3 (as prescribed)", "1", "1"]
        }
        df = pd.DataFrame(data)
        self.assertEqual(len(df), 15)
        self.assertEqual(len(df.columns), 5)

    def test_excel_file_creation(self):
        excel_file_path = "medicines_dataset.xlsx"
        df = pd.DataFrame({
            "Serial Number": list(range(1, 16)),
            "Medicine Name": ["Paracetamol", "Amoxicillin", "Metformin", "Amlodipine", "Atorvastatin", 
                              "Ibuprofen", "Pantoprazole", "Cetirizine", "Azithromycin", "Metformin+Glimepiride", 
                              "Aspirin", "Montelukast", "Alprazolam", "Levothyroxine", "Telmisartan"],
            "Disease Treated": ["Fever, Pain Relief", "Bacterial Infections", "Type 2 Diabetes", 
                                "Hypertension", "High Cholesterol", "Pain Relief, Inflammation", 
                                "Acid Reflux, GERD", "Allergies", "Bacterial Infections", "Diabetes", 
                                "Blood Thinning", "Asthma, Allergies", "Anxiety, Panic Disorders", 
                                "Hypothyroidism", "Hypertension"],
            "Price (per unit) (INR)": [2.00, 10.00, 3.50, 5.00, 8.00, 2.50, 7.00, 3.00, 20.00, 6.00, 
                                       1.50, 12.00, 5.00, 3.00, 8.50],
            "Recommended Doses Per Day": ["1-3", "3 (every 8 hours)", "1-3", "1", "1", "1-3", "1", "1", 
                                            "1", "1-2", "1", "1", "1-3 (as prescribed)", "1", "1"]
        })
        df.to_excel(excel_file_path, index=False, engine='openpyxl')
        self.assertTrue(os.path.exists(excel_file_path))
        os.remove(excel_file_path)

if __name__ == '__main__':
    unittest.main()
