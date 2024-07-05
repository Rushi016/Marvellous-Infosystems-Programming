//  2. Write generic program to find largest number from three numbers.

#include<iostream>

template <class T>
T Max(T No1, T No2, T No3)
{
    if ((No1 >= No2) && (No1 >= No3))
    {
        return No1;
    }
    else if ((No2 >= No1) && (No2 >= No3))
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

int main()
{
    printf("\nLargest Number : %d\n",Max(20,10,30));
    printf("\nLargest Number : %f\n",Max(30.94f,40.94f,20.94f));
    printf("\nLargest Number : %lf\n",Max(10.256461,10.23561,10.512656));

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>g++ Assignment44_2.cpp

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>a

    Largest Number : 30

    Largest Number : 40.939999

    Largest Number : 10.512656

*/