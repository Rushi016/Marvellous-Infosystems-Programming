//  2. Write a program which accept two number from user and display
//     position of common ON bits from that two numbers.


#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

void CommonBits(UINT iNo1, UINT iNo2)
{
    int iCnt = 0;
    printf("Position ON bits : ");

    while(iNo1 && iNo2)
    {
        iCnt++;

        if(((iNo1 & 0x00000001) == 1) && ((iNo2 & 0x00000001) == 1))
        {   
            printf("%d\t",iCnt);
        }
        
        iNo1 = iNo1 >> 1;
        iNo2 = iNo2 >> 1;
    }
    printf("\n");
}

int main()
{
    UINT iValue1 = 0;
    UINT iValue2 = 0;

    printf("Enter fisrt number : \n");
    scanf("%u",&iValue1);

    printf("Enter second number : \n");
    scanf("%u",&iValue2);

    CommonBits(iValue1,iValue2);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>gcc Assignment39_2.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_39>a
    Enter fisrt number : 
    10
    Enter second number :
    15
    Position of ON bits : 2       4

*/