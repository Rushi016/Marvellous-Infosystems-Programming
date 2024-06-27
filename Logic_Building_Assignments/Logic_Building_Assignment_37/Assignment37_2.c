//  2. Write a program which checks whether 5th & 18th bit is ON or OFF.

/*
    iValue = 145264
    iMask = 131088

    iValue =    0000    0000    0000    0010    0011    0111    0111    0000
    iMask =     0000    0000    0000    0010    0000    0000    0001    0000
                -------------------------------------------------------------&
                0000    0000    0000    0010    0000    0000    0001    0000
                 0       0       0       2       0       0       1       0
                                        0x00020010

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
    UINT iMask = 0x00020010;
    BOOL bRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue,iMask);
    if(bRet == TRUE)
    {
        printf("5th and 18th bit is ON.\n");
    }
    else
    {
        printf("5th and 18th bit is OFF.\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>gcc Assignment37_2.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    131089
    5th and 18th bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number :
    145264 
    5th and 18th bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    504256
    5th and 18th bit is OFF.

*/