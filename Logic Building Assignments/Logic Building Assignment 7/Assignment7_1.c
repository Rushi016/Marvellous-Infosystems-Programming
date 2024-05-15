//  1. Write a program which accept number from user and display below pattern.
//  Input : 5
//  Output : *  *   *   *   *   #   #   #   #   #

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= iNo; i++)
    {
        printf("*\t");
    }
    for(i = 1; i <= iNo; i++)
    {
        printf("#\t");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>gcc Assignment7_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : 5
    *       *       *       *       *       #       #       #       #       #

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : 6
    *       *       *       *       *       *       #       #       #       #       #       #   

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : -5
    *       *       *       *       *       #       #       #       #       #

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : 2
    *       *       #       #

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : 1
    *       #

*/