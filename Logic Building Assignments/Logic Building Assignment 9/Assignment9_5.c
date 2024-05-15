//  5. Wirte a program which accept range from user and display all numbers
//     in between that range in reverse order.

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = iStart;

    if(iStart <= iEnd)
    {
        for(iCnt = iEnd; iCnt >= iStart; iCnt-- )
        {
            printf("%d\t",iCnt);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>gcc Assignment9_5.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 23
    Enter ending point : 35
    35      34      33      32      31      30      29      28      27      26      25      24      23

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 10
    Enter ending point : 18
    18      17      16      15      14      13      12      11      10

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 10
    Enter ending point : 10
    10

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : -10
    Enter ending point : 2
    2       1       0       -1      -2      -3      -4      -5      -6      -7      -8      -9      -10  

*/