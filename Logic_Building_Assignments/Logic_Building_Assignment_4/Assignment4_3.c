//  3. Write a program which accept number from user and display all its non factors.

#include<stdio.h>

void NonFact(int iNo)
{
    int i = 0;

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) != 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    NonFact(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>gcc Assignment4_3.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number : 12
    5       7       8       9       10      11
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number : 13
    2       3       4       5       6       7       8       9       10      11      12
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number : 10
    3       4       6       7       8       9

*/