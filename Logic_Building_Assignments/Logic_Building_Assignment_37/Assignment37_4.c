//  4. Write a program which checks whether 7th, 8th and 9th bit is ON or OFF.

/*
    iValue = 2502
    iMask = 448

    iValue =    0000    0000    0000    0000    0000    1001    1100    0110
    iMask =     0000    0000    0000    0000    0000    0001    1100    0000
                -------------------------------------------------------------&
                0000    0000    0000    0000    0000    0001    1100    0000
                 0       0       0       0       0       1       c       0
                                        0x000001c0

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
    UINT iMask = 0x000001c0;
    BOOL bRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue,iMask);
    if(bRet == TRUE)
    {
        printf("7th, 8th and 9th bit is ON.\n");
    }
    else
    {
        printf("7th, 8th and 9th bit is OFF.\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>gcc Assignment37_4.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    448
    7th, 8th and 9th bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    2502
    7th, 8th and 9th bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    500
    7th, 8th and 9th bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    800
    7th, 8th and 9th bit is OFF.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    1000
    7th, 8th and 9th bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    90
    7th, 8th and 9th bit is OFF.

*/