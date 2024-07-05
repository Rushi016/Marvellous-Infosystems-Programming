//  3. Write generic program to accept N values from user and return addition
//     of that values.

#include<iostream>

template <class T>
T AddN(T Arr[], int iSize)
{
    int i = 0;
    T iSum = 0;

    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    return iSum;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};
    printf("Addtion of Integers : %d\n",AddN(arr,5));
    printf("Addtion of Flaots : %f\n",AddN(brr,4));

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>g++ Assignment44_3.cpp

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>a
    Addtion of Integers : 150
    Addtion of Flaots : 32.200001

*/