//  1. Accept one number from user and print that number of * on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while (iCnt<iNo)
    {
        printf("*\t");

        iCnt++;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter your number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 2>gcc Assignment2_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 2>a
    Enter your number : 5
    *       *       *       *       *

*/