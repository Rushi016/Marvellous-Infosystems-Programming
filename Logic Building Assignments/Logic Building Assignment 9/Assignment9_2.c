//  2. Wirte a program which accept range from user and display all even numbers
//     in between that range.

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = iStart;

    if(iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++ )
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
    else
    {
        printf("Invalid Range");
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : " );
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2); 

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>gcc Assignment9_2.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 23
    Enter ending point : 35
    24      26      28      30      32      34

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 10
    Enter ending point : 18
    10      12      14      16      18

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 10
    Enter ending point : 10
    10

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : -10
    Enter ending point : 2
    -10     -8      -6      -4      -2      0       2

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 90
    Enter ending point : 18
    Invalid Range
    
*/