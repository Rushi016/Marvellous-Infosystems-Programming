//  2. Write generic program to accept N values and count frequency of any
//     specific value.

#include<iostream>
using namespace std;

template <class T>
int Frequency(T Arr[], int iSize, T iNo)
{
    int i = 0, iCount = 0;

    for(i = 0; i < iSize; i++)
    {
        if(iNo == Arr[i])
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    printf("Frequency of 10 is %d\n",Frequency(arr,9,10));

    char brr[] = {'A','B','A','C','D','C','A','E','A'};
    printf("Frequency of A is %d\n",Frequency(brr,9,'A'));

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_45>g++ Assignment45_2.cpp

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_45>a
    Frequency of 10 is 4
    Frequency of A is 4

*/