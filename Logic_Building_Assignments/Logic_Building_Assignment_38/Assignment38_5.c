//  5. Write a program which accept one number from user and on its first
//     4 bits. Return modified number.

/*
        On first 4 digit
        0000    0000    0000    0000    0000    0000    0000    1111
         0       0       0       0       0       0       0       f       
                                0x0000000f
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT OnBit(UINT iNo, UINT iMask)
{   
    return iNo | iMask;
}

int main()
{
    UINT iValue = 0;
    UINT iMask = 0x0000000f;
    UINT iRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    iRet = OnBit(iValue, iMask);

    printf("Updated number is : %u\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>gcc Assignment38_5.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>a
    Enter a number : 
    73
    Updated number is : 79

*/