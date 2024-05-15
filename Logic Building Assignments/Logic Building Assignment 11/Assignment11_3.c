//  3. Write a program which accept number from user and return the count of
//     digits in between 3 and 7.

#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0, iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit < 7) && (iDigit > 3))
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

    iRet = CountRange(iValue);
    printf("Count of digits in between 3 and 7 of %d is %d",iValue, iRet);

    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>gcc Assignment11_3.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 2395
    Count of digits in between 3 and 7 of 2395 is 1

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 1018
    Count of digits in between 3 and 7 of 1018 is 0

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 4521
    Count of digits in between 3 and 7 of 4521 is 2

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 9922
    Count of digits in between 3 and 7 of 9922 is 0

*/