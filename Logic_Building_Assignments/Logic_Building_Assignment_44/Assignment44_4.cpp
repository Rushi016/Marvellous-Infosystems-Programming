//  4. Write generic program to accetp N values from user and return largest
//     values.

#include<iostream>

template <class T>
T Max(T Arr[], int iSize)
{
    int i = 0;
    T Max = Arr[i];

    for(i = 0; i < iSize; i++)
    {
        if(Max < Arr[i])
        {
            Max = Arr[i];
        }
    }

    return Max;
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    float brr[] = {10.0f, 3.7f, 9.8f, 8.7f};
    printf("Largest of Integers : %d\n",Max(arr,5));
    printf("Largest of Flaots : %f\n",Max(brr,4));

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>g++ Assignment44_4.cpp 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>a
    Largest of Integers : 50
    Largest of Flaots : 10.000000

*/