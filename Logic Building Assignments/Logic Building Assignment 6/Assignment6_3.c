//  3. Write a program to find factorial of given number.

#include<stdio.h>

int Factorial(int iNo)
{
    int i = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = - iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        iFact = iFact * i;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of %d is : %d",iValue,iRet);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>gcc Assignment6_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : 5
    Factorial of 5 is : 120

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : -5
    Factorial of -5 is : 120

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : 4
    Factorial of 4 is : 24
    
*/