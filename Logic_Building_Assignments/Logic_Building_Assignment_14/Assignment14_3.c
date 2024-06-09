//  3. Accept number of rows and nummber of columns from user and display below pattern.
//      Input:  iRow = 3    iCol = 5
//      Output: A   A   A   A   A
//              B   B   B   B   B
//              C   C   C   C   C


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;
    char ch = '\0';

    for(iCnt = 1, ch = 'A'; iCnt <= iRow; iCnt++, ch++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
           printf("%c\t",ch);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 14>gcc Assignment14_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 14>a
    Enter number of rows : 3
    Enter number of columns : 5
    A       A       A       A       A
    B       B       B       B       B
    C       C       C       C       C

*/