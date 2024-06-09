//  2. Program to print 5 times "Marvellous" on screen.

#include<stdio.h>

void Display()
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("Marvellous\n");
    }
}

int main()
{
    Display();

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 1>gcc Assignment1_2.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 1>a
    Marvellous
    Marvellous
    Marvellous
    Marvellous
    Marvellous

*/