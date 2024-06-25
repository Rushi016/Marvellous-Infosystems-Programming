//  1. Write a recursive program which display below pattern.

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 0;

    if(iCnt < iNo)
    {   
        printf("*\t");
        iCnt++;

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
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 33>gcc Assignment33_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 33>a
    Enter a number : 
    5
    *       *       *       *       *

*/