//  2. Write a program which accept number from user and print numbers till
//     that number.

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        for(i = iNo; i < 0; i++)
        {
            printf("%d\t",i);
        }
    }
    else
    {
         for(i = 1; i <= iNo; i++)
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

    Display(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>gcc Assignment5_2.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>a
    Enter a number : 8
    1       2       3       4       5       6       7       8
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>a
    Enter a number : -8
    -8      -7      -6      -5      -4      -3      -2      -1

*/