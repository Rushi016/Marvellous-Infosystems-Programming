import pandas as pd
from sklearn import preprocessing
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split
from sklearn import metrics


def MarvellousWinePredictor(data_path):
    # Step 1 : Load data
    data = pd.read_csv(data_path)
    print(data)

    print("Size of Actual dataset : ", len(data),"\n")

    # Step 2 : Clean, Prepare and manipulate data
    feature_names = ['Alcohol','Malic acid', 'Ash', 'Alcalinity of ash',
                     'Magnesium', 'Total phenols', 'Flavanoids', 'Nonflavanoid phenols',
                     'Proanthocyanins', 'Color intensity', 'Hue', 'OD280/OD315 of diluted wines',
                     'Proline']  
    print("Names of Features : ", feature_names,"\n")

    labels_names = ['Class']
    print("Names of labels : ",labels_names)

    le = preprocessing.LabelEncoder()
    Alcohol_Encoded = le.fit_transform(data['Alcohol'])
    Malic_acid_Encoded = le.fit_transform(data['Malic acid'])
    Ash_Encoded = le.fit_transform(data['Ash'])
    Alcalinity_of_ash_Encoded = le.fit_transform(data['Alcalinity of ash'])
    Magensium_Encoded = le.fit_transform(data['Magnesium'])
    Total_phenols_Encoded = le.fit_transform(data['Total phenols'])
    Flavanoids_Encoded = le.fit_transform(data['Flavanoids'])
    Nonflavanoid_phenols_Encoded = le.fit_transform(data['Nonflavanoid phenols'])
    Proanthocyanins_Encoded = le.fit_transform(data['Proanthocyanins'])
    Color_intensity_Encoded = le.fit_transform(data['Color intensity'])
    Hue_Encoded = le.fit_transform(data['Hue'])
    OD280_OD315_of_diluted_wines_Encoded = le.fit_transform(data['OD280/OD315 of diluted wines'])
    Prolline_Encoded = le.fit_transform(data['Proline'])

    features = list(zip(Alcohol_Encoded,Malic_acid_Encoded,Ash_Encoded,Alcalinity_of_ash_Encoded,
                        Magensium_Encoded,Total_phenols_Encoded,Flavanoids_Encoded,Nonflavanoid_phenols_Encoded,
                        Proanthocyanins_Encoded,Color_intensity_Encoded,Hue_Encoded,OD280_OD315_of_diluted_wines_Encoded,
                        Prolline_Encoded))
    target = le.fit_transform(data['Class'])
    

    # Split dataset into training set and test set
    data_train, data_test, target_train, target_test = train_test_split(features, target, test_size=0.3)

    # Step 3 : Train Model
    knn = KNeighborsClassifier(n_neighbors=3)

    # Train the model using the traninig sets
    knn.fit(data_train,target_train)

    # Predict the response for test dataset
    y_pred = knn.predict(data_test)

    # Model Accuracy, how often is the classifier correct?
    print("Accuracy : ",metrics.accuracy_score(target_test,y_pred))


def main():
    print("\n-----Mavervellous Infosystesm by Piyush Khairnar-----")
    print("--------------Machine Learning Application---------------\n")
    print("Wine predcitor application using K Nearest Knighbor algorithm\n")
    MarvellousWinePredictor("WinePredictor.csv")

if __name__ == "__main__":
    main()

"""

    Output:
    D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Machine_Learning\Machine_Learning_Assignments\Machine_Learning_Assignment_15>Python Assignment15_1.py

    -----Mavervellous Infosystesm by Piyush Khairnar-----
    --------------Machine Learning Application---------------

    Wine predcitor application using K Nearest Knighbor algorithm

        Class  Alcohol  Malic acid  ...   Hue  OD280/OD315 of diluted wines  Proline
    0        1    14.23        1.71  ...  1.04                          3.92     1065
    1        1    13.20        1.78  ...  1.05                          3.40     1050
    2        1    13.16        2.36  ...  1.03                          3.17     1185
    3        1    14.37        1.95  ...  0.86                          3.45     1480
    4        1    13.24        2.59  ...  1.04                          2.93      735
    ..     ...      ...         ...  ...   ...                           ...      ...
    173      3    13.71        5.65  ...  0.64                          1.74      740
    174      3    13.40        3.91  ...  0.70                          1.56      750
    175      3    13.27        4.28  ...  0.59                          1.56      835
    176      3    13.17        2.59  ...  0.60                          1.62      840
    177      3    14.13        4.10  ...  0.61                          1.60      560

    [178 rows x 14 columns]
    Size of Actual dataset :  178

    Names of Features :  ['Alcohol', 'Malic acid', 'Ash', 'Alcalinity of ash', 'Magnesium', 'Total phenols', 'Flavanoids', 'Nonflavanoid phenols', 'Proanthocyanins', 'Color intensity', 'Hue', 'OD280/OD315 of diluted wines', 'Proline']

    Names of labels :  ['Class']
    Accuracy :  0.9814814814814815

"""