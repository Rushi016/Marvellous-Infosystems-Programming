//  1. Write generic program which accept one value and one number from user.
//     Print that value that number of times on screen.

#include<iostream>
using namespace std;

template <class T>
void Display(T value, int iSize)
{
    int i = 0;

    for(i = 1; i <= iSize; i++)
    {
        cout<<value<<"\t";
    }
    cout<<"\n";
}

int main()
{
    Display('M',7);
    Display(11,3);
    Display(3.7,6);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_45>g++ Assignment45_1.cpp

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_45>a
    M       M       M       M       M       M       M
    11      11      11
    3.7     3.7     3.7     3.7     3.7     3.7

*/