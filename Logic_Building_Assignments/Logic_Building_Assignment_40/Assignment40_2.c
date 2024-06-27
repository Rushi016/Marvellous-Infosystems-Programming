//  2. Write a program which accept one number and position from user and 
//     OFF that bit. Return modified number.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL OffBit(UINT iNo, int iPos)
{
    UINT iMask = 0;

    if((iPos < 1) || (iPos > 32))   
    {
        printf("Enter a valid bit position.\n");
        return iNo;
    }

    iMask = 1 << (iPos - 1);

    iMask = ~iMask;
    
    return iNo & iMask;
}

int main()
{
    UINT iValue1 = 0;
    int iValue2 = 0;
    UINT iRet = FALSE;

    printf("Enter a number : \n");
    scanf("%u",&iValue1);

    printf("Enter a bit position : \n");
    scanf("%d",&iValue2);

    iRet = OffBit(iValue1,iValue2);

    printf("Updated Number : %u\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>gcc Assignment40_2.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>a
    Enter a number : 
    10
    Enter a bit position :
    2
    Updated Number : 8

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>a
    Enter a number : 
    11
    Enter a bit position :
    3
    Updated Number : 11

*/