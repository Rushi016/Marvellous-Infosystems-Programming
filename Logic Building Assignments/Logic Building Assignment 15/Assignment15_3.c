//  3. Accept number of rows and nummber of columns from user and display below pattern.
//      Input:  iRow = 5    iCol = 5
//      Output: a   b   c   d   e
//              1   2   3   4   5
//              a   b   c   d   e
//              1   2   3   4   5
//              a   b   c   d   e

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    char ch = '\0';

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1,ch = 'a'; jCnt <= iCol; jCnt++,ch++)
        {
            if((iCnt % 2) != 0)
            {
                printf("%c\t",ch);
            }
            else
            {
                printf("%d\t",jCnt);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 15>gcc Assignment15_3.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 15>a
    Enter number of rows : 5
    Enter number of columns : 5
    a       b       c       d       e
    1       2       3       4       5
    a       b       c       d       e
    1       2       3       4       5
    a       b       c       d       e

*/