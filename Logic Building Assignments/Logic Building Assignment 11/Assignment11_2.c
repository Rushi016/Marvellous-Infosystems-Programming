//  2. Write a program which accept number from user and return the count of
//     odd digits.

#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
        {
            iCnt = iCnt + 1;
        }
        iNo = iNo / 10;
    }

    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("Count of odd digits in %d is %d",iValue, iRet);

    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>gcc Assignment11_2.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 2395
    Count of odd digits in 2395 is 3

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 1018
    Count of odd digits in 1018 is 2

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : -1018
    Count of odd digits in -1018 is 2

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 8462
    Count of odd digits in 8462 is 0

*/