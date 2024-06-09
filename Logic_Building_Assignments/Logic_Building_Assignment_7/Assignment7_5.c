//  5. Write a program which return difference between Even Factorial and
//     Odd Factorial of given number.

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0, iFact1 = 1, iFact2 = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = iNo; i >= 1; i--)
    {
        if((i % 2) != 0)
        {
            iFact1 = iFact1 * i;
        }
        else
        {
            iFact2 = iFact2 * i;
        }
    }

    return iFact2 - iFact1;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);
    printf("Even and Odd Factorial Differece of %d is %d",iValue,iRet);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>gcc Assignment7_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a   
    Enter a number : 5
    Even and Odd Factorial Differece of 5 is -7

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : -5
    Even and Odd Factorial Differece of -5 is -7

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter a number : 10
    Even and Odd Factorial Differece of 10 is 2895

*/