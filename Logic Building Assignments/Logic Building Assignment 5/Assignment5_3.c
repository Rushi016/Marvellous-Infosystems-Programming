//  3. Write a program which accept number from user and print its numbers line.

#include<stdio.h>

void Display(int iNo)
{
    int i = 0;

    for(i = -iNo; i <= iNo; i++)
    {
        printf("%d\t",i);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>gcc Assignment5_3.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 5>a
    Enter a number : 4
    -4      -3      -2      -1      0       1       2       3       4

*/