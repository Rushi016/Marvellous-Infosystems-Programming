//  2. Accept number of rows and nummber of columns from user and display below pattern.
//      Input:  iRow = 4    iCol = 4
//      Output: A   B   C   D
//              a   b   c   d
//              A   B   C   D
//              a   b   c   d

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    char ch1 = '\0', ch2 = '\0';

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1, ch1 = 'A', ch2 = 'a'; jCnt <= iCol; jCnt++, ch1++, ch2++)
        {
            if((iCnt % 2) != 0)
            {
                printf("%c\t",ch1);
            }
            else
            {
                printf("%c\t",ch2);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 14>gcc Assignment14_2.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 14>a
    Enter number of rows : 4
    Enter number of columns : 4
    A       B       C       D
    a       b       c       d
    A       B       C       D
    a       b       c       d

*/