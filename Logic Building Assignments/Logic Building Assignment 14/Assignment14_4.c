//  4. Accept number of rows and nummber of columns from user and display below pattern.
//      Input:  iRow = 3    iCol = 5
//      Output: 4   4   4   4   4
//              3   3   3   3   3
//              2   2   2   2   2
//              1   1   1   1   1


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    for(iCnt = iRow; iCnt >= 1; iCnt--)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
           printf("%d\t",iCnt);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 14>gcc Assignment14_4.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 14>a
    Enter number of rows : 4
    Enter number of columns : 5
    4       4       4       4       4
    3       3       3       3       3
    2       2       2       2       2
    1       1       1       1       1

*/