//  4. Write a program which accept one number, two positions from user and
//     check whether bit at first or bit as second position is ON or OFF.


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL ChkBit(UINT iNo1, int iPos1, int iPos2)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    while(iNo1)
    {
        iCnt++;

        if(((iNo1 & 0x00000001) == 1))
        {
            if((iCnt == iPos1) || (iCnt == iPos2))
            {
                bFlag = TRUE;
            }
        }
        iNo1 = iNo1 >> 1;
    }
    
    return bFlag;
}

int main()
{
    UINT iValue1 = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    BOOL bRet = FALSE;

    printf("Enter fisrt number : \n");
    scanf("%u",&iValue1);

    printf("Enter First Bit Position : \n");
    scanf("%d",&iValue2);

    printf("Enter Second Bit Position : \n");
    scanf("%d",&iValue3);

    bRet = ChkBit(iValue1,iValue2,iValue3);
    if(bRet == FALSE)
    {
        printf("FALSE\n");
    }
    else
    {
        printf("TRUE\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>gcc Assignment39_4.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>a
    Enter fisrt number : 
    81
    Enter First Bit Position :
    3
    Enter Second Bit Position :
    7
    TRUE

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>a
    Enter fisrt number :
    29
    Enter First Bit Position :
    7
    Enter Second Bit Position :
    3
    TRUE

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>a
    Enter fisrt number :
    9
    Enter First Bit Position :
    3
    Enter Second Bit Position :
    7
    FALSE

*/