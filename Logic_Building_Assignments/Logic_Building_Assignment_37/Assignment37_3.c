//  3. Write a program which checks whether 7th, 15th, 21st and 28th bit is ON or OFF.

/*
    iValue = 144491334
    iMask = 135282752

    iValue =    0000    1000    1001    1100    1100    0011    0100    0110
    iMask =     0000    1000    0001    0000    0100    0000    0100    0000
                -------------------------------------------------------------&
                0000    1000    0001    0000    0100    0000    0100    0000
                 0       8       1       0       4       0       4       0
                                        0x08104040

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
    UINT iMask = 0x08104040;
    BOOL bRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue,iMask);
    if(bRet == TRUE)
    {
        printf("7th, 15th, 21st and 28th bit is ON.\n");
    }
    else
    {
        printf("7th, 15th, 21st and 28th bit is OFF.\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>gcc Assignment37_3.c   

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    144491334                            
    7th, 15th, 21st and 28th bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    135282752
    7th, 15th, 21st and 28th bit is ON.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number : 
    135316228
    7th, 15th, 21st and 28th bit is OFF.

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_37>a
    Enter a number :
    2282799876
    7th, 15th, 21st and 28th bit is OFF.

*/