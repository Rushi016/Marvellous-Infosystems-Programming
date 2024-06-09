//  3. Wirte a program which accept range from user and return addition of all numbers
//     in between that range. (Range should contains positive numbers only)

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = iStart;
    int iSum = 0;

    if((iStart <= iEnd) && (iStart >= 0) && (iEnd >= 0))
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++ )
        {
            iSum = iSum + iCnt;
        }

        return iSum;
    }
    else
    {
       return -1;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : ");
    scanf("%d",&iValue1);

    printf("Enter ending point : " );
    scanf("%d",&iValue2);

    iRet = RangeSum(iValue1, iValue2);
    if(iRet == -1)
    {
        printf("Invalid Range");
    }
    else
    {
        printf("Addition of all numbers in between (%d, %d) is %d",iValue1, iValue2, iRet);
    }
    
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>gcc Assignment9_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 23
    Enter ending point : 30
    Addition of all numbers in between (23, 30) is 212

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 10
    Enter ending point : 18
    Addition of all numbers in between (10, 18) is 126

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : -10
    Enter ending point : 2
    Invalid Range

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 9>a
    Enter starting point : 90
    Enter ending point : 18
    Invalid Range

*/