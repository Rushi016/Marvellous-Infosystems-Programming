//  3. Accept number of rows and number of columns from user and display below pattern.
//  Input:  iRow = 3        iCol = 5
//          5   4   3   2   1   
//          5   4   3   2   1
//          5   4   3   2   1


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = iCol; jCnt >= 1; jCnt--)
        {
            printf("%d\t",jCnt);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 13>gcc Assignment13_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 13>a
    Enter number of rows : 3
    Enter number of columns : 5
    5       4       3       2       1
    5       4       3       2       1
    5       4       3       2       1

*/