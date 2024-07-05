//  4. Write generic program to accept N values and searcg last occurrence
//     of any specific value.

#include<iostream>
using namespace std;

template <class T>
int LastOccurrence(T Arr[], int iSize, T iNo)
{
    int i = 0, iCount = 0;

    for(i = 0; i < iSize; i++)
    {
        if(iNo == Arr[i])
        {
            iCount = i;
        }
    }

    return iCount;
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};
    printf("Last Occurrence of 40 is %d\n",LastOccurrence(arr,9,40));

    char brr[] = {'A','B','A','C','D','C','A','E','A'};
    printf("Last Occurrence of C is %d\n",LastOccurrence(brr,9,'C'));

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_45>g++ Assignment45_4.cpp 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_45>a
    Last Occurrence of 40 is 7
    Last Occurrence of C is 5

*/