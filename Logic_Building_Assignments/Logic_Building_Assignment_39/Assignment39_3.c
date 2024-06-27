//  3. Write a program which accept two number from user and check whether
//     9th or 12th bit is ON or OFF.


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

BOOL CheckBit(UINT iNo1)
{
    int iCnt = 0;
    BOOL bFlag = FALSE;

    while(iNo1)
    {
        iCnt++;

        if(((iNo1 & 0x00000001) == 1))
        {
            if((iCnt == 9) || (iCnt == 12))
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
    UINT iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter fisrt number : \n");
    scanf("%u",&iValue);

    bRet = CheckBit(iValue);
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
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>gcc Assignment39_3.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>a
    Enter fisrt number : 
    257
    TRUE

*/