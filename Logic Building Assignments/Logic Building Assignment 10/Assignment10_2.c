//  2. Write a program which accept number from user and check whether it contains
//     0 in it or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    else if(iNo == iDigit)
    {
        return TRUE;
    }
    
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
        iNo = iNo / 10;
    }

    return FALSE; 
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);
    if(bRet == FALSE)
    {
        printf("It NOT contains ZERO");
    }
    else
    {
        printf("It contains ZERO");
    }
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>gcc Assignment10_2.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 2395
    It NOT contains ZERO

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 1018
    It contains ZERO

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 9000
    It contains ZERO

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 10687
    It contains ZERO

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 0
    It contains ZERO

*/