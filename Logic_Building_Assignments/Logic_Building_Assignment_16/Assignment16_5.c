//  5. Accept number of rows and number of columns from user and display below pattern.
//     Input:   iRow = 4    iCol = 4
//     Output:  1   2   3   4     
//              1   *   *   4   
//              1   *   *   4   
//              1   2   3   4   
            
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    for(int iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(int jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if(iCnt == 1 || jCnt == 1 || iCnt == iRow || jCnt == iCol)
            {
                printf("%d\t",jCnt);
            }
            else
            {
                printf("*\t");
            }
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 16>gcc Assignment16_5.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 16>a
    Enter number of rows : 4
    Enter number of columns : 4
    1       2       3       4
    1       *       *       4
    1       *       *       4
    1       2       3       4

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 16>a
    Enter number of rows : 10
    Enter number of columns : 5
    1       2       3       4       5
    1       *       *       *       5
    1       *       *       *       5
    1       *       *       *       5
    1       *       *       *       5
    1       *       *       *       5
    1       *       *       *       5
    1       *       *       *       5
    1       *       *       *       5
    1       2       3       4       5

*/