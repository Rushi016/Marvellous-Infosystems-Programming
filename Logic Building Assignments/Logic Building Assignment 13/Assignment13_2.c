//  2. Accept number of rows and number of columns from user and display below pattern.
//  Input:  iRow = 4        iCol = 4
//          1   2   3
//          1   2   3
//          1   2   3
//          1   2   3

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 13>gcc Assignment13_2.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 13>a
    Enter number of rows : 4
    Enter number of columns : 3
    1       2       3
    1       2       3
    1       2       3
    1       2       3

*/