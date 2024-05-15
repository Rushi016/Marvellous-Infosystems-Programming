//  1. Write a program which accept number from user and print that number of
//     $&* on screen.

#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    {
        for(i = 1; i <= iNo; i++)
        {
            printf("$\t*\t");
        }
    }
    
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Pattern(iValue);
    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>gcc Assignment5_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>a
    Enter a number : 5
    $       *       $       *       $       *       $       *       $       *

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>a
    Enter a number : 3
    $       *       $       *       $       *

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>a
    Enter a number : -3
    $       *       $       *       $       *

*/