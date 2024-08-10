#   Advertising Case Study Using Liner Regression

import numpy as np
import pandas as pd
from sklearn import metrics
from sklearn.linear_model import LinearRegression
from sklearn.model_selection import train_test_split
import matplotlib.pyplot as plot

def MarvellousAdvertisementPredictor(data_path):
    # Load the dataset
    data = pd.read_csv(data_path, index_col=0)
    print("Size of Actual dataset", len(data))

    # Define features names
    feature_names = ['TV', 'radio', 'newspaper']
    print("Names of Features", feature_names)

    # Seperate the features and the target
    X = data[feature_names]
    target = data['sales']

    # Split the dataset into training and testing sets
    X_train, X_test, target_train, target_test = train_test_split(X, target, test_size = 1/2)

    print("Size of Training dataset", len(X_train))
    print("Size of Testing dataset", len(X_test))

    # Create the Linear Regression model
    linreg = LinearRegression()

    # Train the model
    linreg.fit(X_train, target_train)

    # Make prediction on the test set
    target_pred = linreg.predict(X_test)

    # Print actual and predicted values
    print("Testing set (actual values) : ")
    print(target_test)

    print("Result of Testing : ")
    print(target_pred)

    # Calculate and print the RMSE
    rmse = np.sqrt(metrics.mean_squared_error(target_test,target_pred))
    print("Root Mean Squared Error : ", rmse)

    # Plotting the results
    plot.figure(figsize=(10, 6))
    plot.scatter(target_test, target_pred, color='blue', edgecolor='k')
    plot.plot([min(target_test), max(target_test)], [min(target_test), max(target_test)], color='red', linewidth=2)
    plot.xlabel("Actual Sales")
    plot.ylabel("Predicted Sales")
    plot.title("Actual vs Predicted Sales")
    plot.show()

def main():
    MarvellousAdvertisementPredictor("MarvellousAdvertising.csv")

if __name__ == "__main__":
    main()

"""

    Output:
    D:\Marvellous_Infosystems\Python_Data_Science_Machine_Learning_with_Automation\Machine_Learning\Machine_Learning_Assignments\Machine_Learning_Assignment_16>Python Assignment16_1.py
    Size of Actual dataset 200
    Names of Features ['TV', 'radio', 'newspaper']
    Size of Training dataset 100
    Size of Testing dataset 100
    Testing set (actual values) : 
    12     17.4
    61      8.1
    121    15.5
    55     20.2
    170    15.0
        ...
    74     11.0
    127     6.6
    104    14.7
    53     22.6
    91     11.2
    Name: sales, Length: 100, dtype: float64
    Result of Testing :
    [17.60437092  5.72141475 14.40692195 20.62455408 18.0752649  18.83667805
    9.59925706  6.95111537  9.79404759 20.71015722 15.28108756 22.09212605
    10.03871979 17.10656542 17.41890626 18.46556761 15.01931155  7.78060378
    6.13150941  6.65776591  9.41361554 14.67805241 14.57690806  6.49887882
    15.38580258 16.6288083  11.31878071  8.11007447 16.79840865 11.19256494
    21.21180725 19.26407141 24.19106494 20.01736159 10.01387242  8.28117815
    22.94499346 13.57598618 19.01642241 12.44866725 10.65769134 16.58642519
    15.88619308 10.9369948  18.42465902 11.94345929  4.46673794 20.02488228
    11.46888128  8.26370708 17.0249575  17.10065968 12.04500142 12.04587814
    19.36447535 20.66032519 15.31086771  8.93420362 15.55821207 18.02972069
    20.23655431 22.19236661 15.90485862  8.62719053 10.24768579 13.58481926
    21.94995534 23.23029798 15.47358266 17.32694618 16.9403961  14.11735518
    21.39041155 18.01970235 10.53723566  9.69833161 23.705248   13.83995661
    9.21148168  7.52309549 11.89100889 15.5361342  16.2967347  12.49571608
    7.65911273  8.08348445 15.23266863 14.72388794 14.89960062 17.05058502
    10.66618184 17.11744983 13.34758079  9.77032518  8.65249385  9.81062495
    10.70479038 14.89366442 20.85442432 10.09219158]
    Root Mean Squared Error :  1.906646070604368

"""