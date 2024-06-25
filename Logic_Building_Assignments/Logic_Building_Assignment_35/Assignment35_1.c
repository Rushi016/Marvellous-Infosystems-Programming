//  1. Write a recursive program which accept number from user and display
//     below pattern.

#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("%d\t*\t",iNo);
        iNo--;

        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>gcc Assignment35_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>a
    Enter a number : 
    5
    5       *       4       *       3       *       2       *       1       *

*/