//  5. Accept number of rows and number of columns from user and display below pattern.
//  Input:  iRow = 4        iCol = 4
//          1   1   1   1 
//          2   2   2   2   
//          3   3   3   3
//          4   4   4   4      


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0;
    int jCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 13>gcc Assignment13_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 13>a
    Enter number of rows : 4
    Enter number of columns : 4
    1       1       1       1
    2       2       2       2
    3       3       3       3
    4       4       4       4

*/