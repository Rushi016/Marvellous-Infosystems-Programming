//  3. Write a program which accept one number and position from user and
//     ON that bit. Return modified number.

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT OnBit(UINT iNo, int iPos)
{
    UINT iMask = 0;

    if((iPos < 1) || (iPos > 32))   
    {
        printf("Enter a valid bit position.\n");
        return iNo;
    }

    iMask = 1 << (iPos - 1);
    
    return iNo | iMask;
}

int main()
{
    UINT iValue1 = 0;
    int iValue2 = 0;
    UINT iRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue1);

    printf("Enter a bit position : \n");
    scanf("%d",&iValue2);

    iRet = OnBit(iValue1,iValue2);

    printf("Updated Number : %u\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>gcc Assignment40_3.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>a
    Enter a number : 
    10
    Enter a bit position :
    3
    Updated Number : 14

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>a
    Enter a number :
    11
    Enter a bit position :
    3
    Updated Number : 15

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_40>a
    Enter a number : 
    7
    Enter a bit position :
    3
    Updated Number : 7

*/