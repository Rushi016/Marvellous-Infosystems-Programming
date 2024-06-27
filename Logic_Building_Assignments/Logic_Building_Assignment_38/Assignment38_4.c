//  4. Write a program which accept one number from user and toggle 7th
//     and 10th bit of that number. Return modified number.

/*
        toggle 7th and 10th bit
        0000    0000    0000    0000    0000    0010    0100    0000
         0       0       0       0       0       2       4       0       
                                0x00000240
*/

#include<stdio.h>
typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleBit(UINT iNo, UINT iMask)
{   
    return iNo ^ iMask;
}

int main()
{
    UINT iValue = 0;
    UINT iMask = 0x00000240;
    UINT iRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue, iMask);

    printf("Updated number is : %u\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>gcc Assignment38_4.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_38>a
    Enter a number : 
    137
    Updated number is : 713

*/