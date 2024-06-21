import pandas as pd
from sklearn.preprocessing import LabelEncoder
from sklearn.model_selection import train_test_split
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score

label_encoder_whether =LabelEncoder()
label_encoder_temperature =LabelEncoder()
label_encoder_play =LabelEncoder()

# Step 5: Calculate Accuracy
def CheckAccuracy(data_test, target_test, knn_model):
    y_pred = knn_model.predict(data_test)
    accuracy = accuracy_score(target_test, y_pred)
    return accuracy

# Step 4: Test the model
def DataTesting(knn_model):
    valid_whether = label_encoder_whether.classes_
    valid_temperature = label_encoder_temperature.classes_

    print("\nEnter the following details:")
    whether = input("Whether (Overcast, Rainy, Sunny): ").capitalize()
    temperature = input("Temperature (Cool, Hot, Mild): ").capitalize()

    if whether not in valid_whether:
        raise ValueError(f"Invalid input for whether: {whether}")
    if temperature not in valid_temperature:
        raise ValueError(f"Invalid input for temperature: {temperature}")

    whether_encoded = label_encoder_whether.transform([whether])[0]
    temperature_encoded = label_encoder_temperature.transform([temperature])[0]

    # Create a DataFrame for the input with the same column names used during training
    input_fobj = pd.DataFrame([[whether_encoded, temperature_encoded]], columns = ['Whether', 'Temperature'])

    # Predict using the trained model
    prediction = knn_model.predict(input_fobj)

    # Decode the prediction
    return label_encoder_play.inverse_transform(prediction)[0], whether, temperature

# Step 3: Train the data
def  DataTraining(features, labels):
    # Split the data into training and testing sets
    data_train, data_test, target_train, target_test = train_test_split(features, labels, test_size = 0.5)

    # Initialize and fit the KNN model
    knn_model = KNeighborsClassifier(n_neighbors = 3)
    knn_model.fit(data_train, target_train)

    return knn_model, data_test, target_test

# Step 2: Clean, Prepare and Manipulate Data
def DataProcessing(fobj):
    # Drop the 'Unnamed: 0' column as it is not needed
    fobj = fobj.drop(columns = ['Unnamed: 0'])

    # Fit and transform the data using LabelEncoder
    fobj['Whether'] = label_encoder_whether.fit_transform(fobj['Whether'])
    fobj['Temperature'] = label_encoder_temperature.fit_transform(fobj['Temperature'])
    fobj['Play'] = label_encoder_play.fit_transform(fobj['Play'])

    # Split into features and target
    features = fobj[['Whether', 'Temperature']]
    labels = fobj['Play']

    return features, labels

# Step 1: Load the CSV file
def LoadCSV():
    fobj = pd.read_csv('MarvellousInfosystems_PlayPredictor.csv')

    return fobj

def main():
    fobj = LoadCSV()

    features, labels = DataProcessing(fobj)

    knn_model, data_test, target_test = DataTraining(features, labels)

    try:
        prediction, whether, temperature = DataTesting(knn_model)
        print(f"\nWhether = {whether}, Temperature = {temperature}: Prediction = {prediction}")
        print(f"\nBased on the weather being '{whether}' and the temperature being '{temperature}', it is predicted that you {'will' if prediction == 'Yes' else 'will not'} play outside.")
    except ValueError as vobj:
        print(f"Error : {vobj}")
    
    accuracy = CheckAccuracy(data_test, target_test, knn_model)
    print(f"\nAccuracy: {accuracy}")

if __name__ == "__main__":
    main()

"""

Output:
D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Machine_Learning\Machine_Learning_Assignments\Machine_Learning_Assignment_14>Python Assignment14_1.py

Enter the following details:
Whether (Overcast, Rainy, Sunny): Sunny
Temperature (Cool, Hot, Mild): Mild

Whether = Sunny, Temperature = Mild: Prediction = No

Based on the weather being 'Sunny' and the temperature being 'Mild', it is predicted that you will not play outside.

Accuracy: 0.6666666666666666


D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Machine_Learning\Machine_Learning_Assignments\Machine_Learning_Assignment_14>Python Assignment14_1.py

Enter the following details:
Whether (Overcast, Rainy, Sunny): Rainy   
Temperature (Cool, Hot, Mild): Hot

Whether = Rainy, Temperature = Hot: Prediction = Yes

Based on the weather being 'Rainy' and the temperature being 'Hot', it is predicted that you will play outside.

Accuracy: 0.8


D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Machine_Learning\Machine_Learning_Assignments\Machine_Learning_Assignment_14>Python Assignment14_1.py

Enter the following details:
Whether (Overcast, Rainy, Sunny): Overcast
Temperature (Cool, Hot, Mild): Mild

Whether = Overcast, Temperature = Mild: Prediction = Yes

Based on the weather being 'Overcast' and the temperature being 'Mild', it is predicted that you will play outside.

Accuracy: 0.7333333333333333


D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Machine_Learning\Machine_Learning_Assignments\Machine_Learning_Assignment_14>Python Assignment14_1.py

Enter the following details:
Whether (Overcast, Rainy, Sunny): Rainy
Temperature (Cool, Hot, Mild): Hot

Whether = Rainy, Temperature = Hot: Prediction = No

Based on the weather being 'Rainy' and the temperature being 'Hot', it is predicted that you will not play outside.

Accuracy: 0.6


"""