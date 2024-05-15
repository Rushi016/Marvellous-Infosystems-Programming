//  4. Write a program which accepts N from user and print all odd numbers up to N.

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i = 0;

    for(i = 1; i <= iNo; i++)
    {
        if((i % 2) != 0)
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

    OddDisplay(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>gcc Assignment5_4.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>a
    Enter a number : 18
    1       3       5       7       9       11      13      15      17

*/