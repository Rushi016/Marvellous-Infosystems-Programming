//  5. Write a program which checks whether first and last bit is ON or OFF.
//     First bit means bit number 1 and last bit means bit number 32.

/*
    iValue = 2524224965
    iMask = 2147483649

    iValue =    1001    0110    0111    0100    1001    1101    1100    0101
    iMask =     1000    0000    0000    0000    0000    0000    0000    0001
                -------------------------------------------------------------&
                1000    0000    0000    0000    0000    0000    0000    0001
                 8       0       0       0       0       0       0       1
                                        0x80000001

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
    UINT iMask = 0x80000001;
    BOOL bRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue,iMask);
    if(bRet == TRUE)
    {
        printf("First and Last bit is ON.\n");
    }
    else
    {
        printf("First and Last bit is OFF.\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>gcc Assignment37_5.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    2147483649
    First and Last bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number :
    8956247889
    First and Last bit is OFF.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    2524224965
    First and Last bit is ON.

*/