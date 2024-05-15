//  4. Write a program to find odd factorial of given number.

#include<stdio.h>

int OddFactorial(int iNo)
{
    int i = 0, iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if((i % 2) != 0)
        {
            iFact = iFact * i;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Odd Factorial of %d is %d",iValue,iRet);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>gcc Assignment7_4.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : 5
    Odd Factorial of 5 is 15

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : -5
    Odd Factorial of -5 is 15

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : 10
    Odd Factorial of 10 is 945

*/