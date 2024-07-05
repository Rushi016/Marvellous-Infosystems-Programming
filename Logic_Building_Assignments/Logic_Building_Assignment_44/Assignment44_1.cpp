//  1. Write generic program to multiply two numbers.

#include<iostream>

template <class T>
T Multiply(T No1, T No2)
{
    T Ans;
    Ans = No1 * No2;
    return Ans;
}

int main()
{
    printf("\nMultiplication of Integers : %d\n",Multiply(10,20));
    printf("\nMultiplication of Floats : %f\n",Multiply(10.25f,20.26f));
    printf("\nMultiplication of Doubles : %lf\n",Multiply(10.21402,20.2351));

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>g++ Assignment44_1.cpp

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_44>a

    Multiplication of Integers : 200

    Multiplication of Floats : 207.665009

    Multiplication of Doubles : 206.681716

*/