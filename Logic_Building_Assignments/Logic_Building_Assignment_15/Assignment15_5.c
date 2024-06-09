//  4. Accept number of rows and nummber of columns from user and display below pattern.
//      Input:  iRow = 5    iCol = 5
//      Output: 1   2   3   4
//              2   3   4   5   
//              3   4   5   6   
//              4   5   6   7             

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0, iNum = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1,iNum = iCnt; jCnt <= iCol; jCnt++,iNum++)
        {
            printf("%d\t",iNum);
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter number of columns : ");
    scanf("%d",&iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 15>gcc Assignment15_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 15>a
    Enter number of rows : 4
    Enter number of columns : 4
    1       2       3       4
    2       3       4       5
    3       4       5       6
    4       5       6       7

*/