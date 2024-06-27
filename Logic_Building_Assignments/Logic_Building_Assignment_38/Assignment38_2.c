//  2. Write a program which accept one number from user and off 7th and 10th
//     bit of that number if it is on. Return modified number.

/*
        7th and 10th bit is OFF
        1111    1111    1111    1111    1111    1101    1011    1111
        f       f       f       f       f       D       B       f
                                0xfffffDBf
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
    UINT iMask = 0xfffffDBf;
    UINT iRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    iRet = OffBit(iValue, iMask);

    printf("Updated number is : %u\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>gcc Assignment38_2.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>a
    Enter a number : 
    577
    Updated number is : 1

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>a
    Enter a number :
    458
    Updated number is : 394

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>a
    Enter a number : 
    1
    Updated number is : 1

*/