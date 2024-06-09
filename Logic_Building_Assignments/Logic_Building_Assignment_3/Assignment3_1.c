//  1. Write a program which accept one number from user and print
//     that number of even numbers on screen.

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    //Filter
    if(iNo <= 0)
    {
        return;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",2*iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("How many even numbers do you want : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 3>gcc Assignment3_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 3>a
    How many even numbers do you want : 7
    2       4       6       8       10      12      14

*/