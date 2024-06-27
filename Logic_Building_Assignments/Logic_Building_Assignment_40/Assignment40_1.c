//  1. Write a program which accept one number and position from user and check
//     whether bit at that position is ON or OFF. If bit is one return TRUE
//     otherwise return FALSE.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo, int iPos)
{
    UINT iMask = 0;
    BOOL bFlag = FALSE;

    if((iPos < 1) || (iPos > 32))   
    {
        return FALSE;
    }

    iMask = 1 << (iPos - 1);

    if(iNo & iMask)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;
    BOOL bRet = FALSE;

    printf("Enter a number : \n");
    scanf("%u",&iValue1);

    printf("Enter a bit position : \n");
    scanf("%d",&iValue2);

    bRet = ChkBit(iValue1,iValue2);

    if(bRet == FALSE)
    {
        printf("FALSE\n");
    }
    else
    {
        printf("TRUE\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>gcc Assignment40_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>a
    Enter a number : 
    10
    Enter a bit position :
    2
    TRUE

*/