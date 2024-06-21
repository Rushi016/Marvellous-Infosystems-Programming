import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import LabelEncoder
from sklearn.neighbors import KNeighborsClassifier
from sklearn.metrics import accuracy_score, classification_report, confusion_matrix

# Initialize the LabelEncoders globally so they can be used in different functions
label_encoder_whether = LabelEncoder()
label_encoder_temperature = LabelEncoder()
label_encoder_play = LabelEncoder()

# Step 5: Calculate Accuracy
def check_accuracy(data_test, target_test, knn_model):
    y_pred = knn_model.predict(data_test)
    accuracy = accuracy_score(target_test, y_pred)

    print(f"\nAccuracy: {accuracy}")
    print("\nClassification Report:")
    print(classification_report(target_test, y_pred, target_names=label_encoder_play.classes_))
    print("Confusion Matrix:")
    print(confusion_matrix(target_test, y_pred))

# Step 4: Test the model
def test_model(whether, temperature, knn_model):
    whether_encoded = label_encoder_whether.transform([whether])[0]
    temperature_encoded = label_encoder_temperature.transform([temperature])[0]
    # Create a DataFrame for the input with the same column names used during training
    input_fobj = pd.DataFrame([[whether_encoded, temperature_encoded]], columns=['Whether', 'Temperature'])
    # Predict using the trained model
    prediction = knn_model.predict(input_fobj)
    # Decode the prediction
    return label_encoder_play.inverse_transform(prediction)[0]

def get_user_input(knn_model):
    print("\nEnter the following details:")
    whether = input("Whether (Sunny, Overcast, Rainy): ").capitalize()
    temperature = input("Temperature (Hot, Mild, Cool): ").capitalize()
    prediction = test_model(whether, temperature, knn_model)
    print(f"\nPrediction for Whether = {whether}, Temperature = {temperature}: {prediction}")

def main():
# Step 1: Load the CSV file
    fobj = pd.read_csv('PlayPredictor.csv')

# Step 2: Clean, Prepare and Manipulate Data
    # Drop the 'Unnamed: 0' column as it is not needed
    fobj = fobj.drop(columns=['Unnamed: 0'])

    # Fit and transform the data using LabelEncoder
    fobj['Whether'] = label_encoder_whether.fit_transform(fobj['Whether'])
    fobj['Temperature'] = label_encoder_temperature.fit_transform(fobj['Temperature'])
    fobj['Play'] = label_encoder_play.fit_transform(fobj['Play'])

    # Split into features and target
    features = fobj[['Whether', 'Temperature']]
    labels = fobj['Play']

# Step 3: Train the data
    # Split the data into training and testing sets
    data_train, data_test, target_train, target_test = train_test_split(features, labels, test_size=0.2)

    # Initialize and fit the KNN model
    knn_model = KNeighborsClassifier(n_neighbors=3)
    knn_model.fit(data_train, target_train)

    # Get user input and predict
    get_user_input(knn_model)

    # Check model accuracy
    check_accuracy(data_test, target_test, knn_model)

if __name__ == "__main__":
    main()


"""

    Output:
    D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Machine_Learning\Machine_Learning_Assignments\Machine_Learning_Assignment_14>Python Assignment14_1.py

    Enter the following details:
    Whether (Sunny, Overcast, Rainy): Sunny
    Temperature (Hot, Mild, Cool): Cool

    Prediction for Whether = Sunny, Temperature = Cool: Yes

    Accuracy: 0.3333333333333333

    Classification Report:
                precision    recall  f1-score   support

            No       0.00      0.00      0.00         2
            Yes       0.50      0.50      0.50         4

        accuracy                           0.33         6
    macro avg       0.25      0.25      0.25         6
    weighted avg       0.33      0.33      0.33         6

    Confusion Matrix:
    [[0 2]
    [2 2]]

    D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Machine_Learning\Machine_Learning_Assignments\Machine_Learning_Assignment_14>Python Assignment14_1.py

    Enter the following details:
    Whether (Sunny, Overcast, Rainy): Rainy
    Temperature (Hot, Mild, Cool): Cool

    Prediction for Whether = Rainy, Temperature = Cool: Yes

    Accuracy: 0.6666666666666666

    Classification Report:
                precision    recall  f1-score   support

            No       1.00      0.33      0.50         3
            Yes       0.60      1.00      0.75         3

        accuracy                           0.67         6
    macro avg       0.80      0.67      0.62         6
    weighted avg       0.80      0.67      0.62         6

    Confusion Matrix:
    [[1 2]
    [0 3]]

    D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Machine_Learning\Machine_Learning_Assignments\Machine_Learning_Assignment_14>Python Assignment14_1.py

    Enter the following details:
    Whether (Sunny, Overcast, Rainy): Sunny
    Temperature (Hot, Mild, Cool): Hot

    Prediction for Whether = Sunny, Temperature = Hot: No

    Accuracy: 0.5

    Classification Report:
                precision    recall  f1-score   support

            No       0.50      0.67      0.57         3
            Yes       0.50      0.33      0.40         3

        accuracy                           0.50         6
    macro avg       0.50      0.50      0.49         6
    weighted avg       0.50      0.50      0.49         6

    Confusion Matrix:
    [[2 1]
    [2 1]]


"""