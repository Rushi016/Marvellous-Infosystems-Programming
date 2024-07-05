//  5. Write generic program to accetp N values from user and return smallest
//     values.

#include<iostream>

template <class T>
T Min(T Arr[], int iSize)
{
    int i = 0;
    T Min = Arr[i];

    for(i = 0; i < iSize; i++)
    {
        if(Min > Arr[i])
        {
            Min = Arr[i];
        }
    }

    return Min;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};
    printf("Smallest of Integers : %d\n",Min(arr,5));
    printf("Smallest of Flaots : %f\n",Min(brr,4));

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>g++ Assignment44_5.cpp 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>a
    Smallest of Integers : 10
    Smallest of Flaots : 3.700000

*/