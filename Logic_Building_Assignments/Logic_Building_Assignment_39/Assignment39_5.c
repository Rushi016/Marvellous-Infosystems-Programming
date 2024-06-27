//  5. Write a program which accept one number from user and range of positions
//     from user. Toggle all bits from that range.

/*
iNo     0000    0000    0000    0000    0000    0011    1000    0001 = 879
iMask   0000    0000    0000    0000    0001    1111    0000    0000 = 7936 Range (9 to 13)
        -------------------------------------------------------------- ^
        0000    0000    0000    0000    0001    1100    1000    0001 = 7279

        1 << (9-1)  0   1   0   0   0   0   0   0   0   0
        1 << (10-1) 1   0   0   0   0   0   0   0   0   0   
                    ---------------------------------------- |
                    1   1   0   0   0   0   0   0   0   0                  
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

UINT ToggleBitRange(UINT iNo, int iStart, int iEnd)
{
    UINT iMask = 0;
    UINT iBit = 0;
    int i = 0;

    for(i = iStart; i <= iEnd; i++)
    {
        iBit = 1 << (i - 1);
        iMask = iMask | iBit;
    }

    return iNo ^ iMask;
}

int main()
{
    UINT iValue1 = 0;
    UINT iRet = 0;
    int iValue2 = 0;
    int iValue3 = 0;

    printf("Enter fisrt number : \n");
    scanf("%u",&iValue1);

    printf("Enter Start Bit Position : \n");
    scanf("%d",&iValue2);

    printf("Enter End Bit Position : \n");
    scanf("%d",&iValue3);

    iRet = ToggleBitRange(iValue1,iValue2,iValue3);

    printf("%u\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>gcc Assignment39_5.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>a
    Enter fisrt number : 
    879
    Enter Start Bit Position :
    9
    Enter End Bit Position :
    13
    7279

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>a
    Enter fisrt number : 
    900
    Enter Start Bit Position :
    6
    Enter End Bit Position :
    11
    1124

*/