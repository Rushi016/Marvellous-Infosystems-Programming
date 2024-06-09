//  5. Write a program which accept number from user and return difference 
//     between summation of even digits and summation of odd digits.

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iSumEven = 0, iSumOdd = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) != 0)
        {
            iSumOdd = iSumOdd + iDigit;
        }
        else
        {
            iSumEven = iSumEven + iDigit;
        }
        iNo = iNo / 10;
    }

    return iSumEven - iSumOdd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountDiff(iValue);
    printf("Difference between summation of even digits and odd digits in %d is %d",iValue, iRet);

    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>gcc Assignment11_5.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 2395
    Difference between summation of even digits and odd digits in 2395 is -15

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 1018
    Difference between summation of even digits and odd digits in 1018 is 6

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 8440
    Difference between summation of even digits and odd digits in 8440 is 16

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 5733
    Difference between summation of even digits and odd digits in 5733 is -18

*/