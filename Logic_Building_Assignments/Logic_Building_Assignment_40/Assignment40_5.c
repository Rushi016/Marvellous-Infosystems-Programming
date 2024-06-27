//  5. Write a program which accept one number from user and toggle contents
//     of first and last nibble of the number. Return modified number.
//     (Nibble is a group of four bits).

/*
 iNo : 10   0000    0000    0000    0000    0000    0000    0000    1010
 iMask :    1111    0000    0000    0000    0000    0000    0000    1111
            ------------------------------------------------------------- ^
            1111    0000    0000    0000    0000    0000    0000    0101    

iMask :     1111    0000    0000    0000    0000    0000    0000    1111
             f       0       0       0       0       0       0       f
                            0xf00000f

*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ToggleBit(UINT iNo)
{
    return iNo ^ 0xf000000f;
}

int main()
{
    UINT iRet = 0;
    UINT iValue = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    iRet = ToggleBit(iValue);

    printf("Updated Number : %u\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>gcc Assignment40_5.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>a
    Enter a number : 
    10
    Updated Number : 4026531845

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>a
    Enter a number :
    15
    Updated Number : 4026531840

*/