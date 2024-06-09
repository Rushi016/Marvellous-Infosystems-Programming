//  3. Program to print 5 to 1 numbers on screen.

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    iCnt = 5;
    while (iCnt>0)
    {
        printf("%d\t",iCnt);
        iCnt--;
    } 
}

int main()
{
    Display();

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 1>gcc Assignment1_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 1>a
    5       4       3       2       1

*/