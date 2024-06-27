//  1. Write a program which checks whether 15th bit is ON or OFF.

/*
    iValue = 49152      0   1   1   0   0   0   0   0   0   0   0   0   0   0   0   0
    iMask = 32768       0   1   0   0   0   0   0   0   0   0   0   0   0   0   0   0
                        --------------------------------------------------------------&
    iResult = 32768     0   1   0   0   0   0   0   0   0   0   0   0   0   0   0   0

*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo, UINT iMask)
{
    UINT iResult = 0;

    iResult = iNo & iMask;

    if(iResult == iMask)
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
    UINT iValue = 0;
    UINT iMask = 32768;
    BOOL bRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue,iMask);
    if(bRet == TRUE)
    {
        printf("15th bit is ON.\n");
    }
    else
    {
        printf("15th bit is OFF.\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>gcc Assignment37_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    32769
    15th bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number :
    65536
    15th bit is OFF.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number :
    49152
    15th bit is ON.

*/