//  1. Write a program which accept number from user and if number is less
//     than 50 then print small, if it is greater than 50 and lest than 100
//     then print medium, if it is greater than 100 then print large.

#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Samll");
    }
    else if ((iNo > 50) && (iNo <= 100))
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>gcc Assignment6_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : 75
    Medium

*/