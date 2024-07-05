//  5. Write generic program to accept N values and reverse the contents.

#include<iostream>
using namespace std;

template <class T>
void Reverse(T Arr[], int iSize)
{
    int temp = 0;
    int i = 0;

    for(i = 0; i < iSize; i++,iSize--)
    {
        if(i <= iSize-1)
        {
            temp = Arr[i];
            Arr[i] = Arr[iSize-1];
            Arr[iSize-1] = temp;
        }
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    printf("\n");
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    printf("\n");

    Reverse(arr,9);

    printf("\n");
    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_45>g++ Assignment45_5.cpp

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_45>a

    10      20      30      10      30      40      10      40      10

    10      40      10      40      30      10      30      20      10

*/