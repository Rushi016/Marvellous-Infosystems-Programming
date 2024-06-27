//  1. Write a program which accept one number from user and off 7th bit of
//     that number if it is on. Return modified number.

/*
        7th bit is OFF
        1111    1111    1111    1111    1111    1111    1011    1111
        f       f       f       f       f       f       B       f
                                0xffffffBf
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT OffBit(UINT iNo, UINT iMask)
{   
    return iNo & iMask;
}

int main()
{
    UINT iValue = 0;
    UINT iMask = 0xffffffBf;
    UINT iRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    iRet = OffBit(iValue, iMask);

    printf("Updated number is : %u\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>gcc Assignment38_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>a
    Enter a number : 
    79
    Updated number is : 15

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>a
    Enter a number :
    12
    Updated number is : 12

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>a
    Enter a number : 
    84
    Updated number is : 20

*/