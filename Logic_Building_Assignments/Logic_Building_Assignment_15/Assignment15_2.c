//  2. Accept number of rows and nummber of columns from user and display below pattern.
//      Input:  iRow = 4    iCol = 5
//      Output: 2   4   6   8   10
//              1   3   5   7   9
//              2   4   6   8   10
//              1   3   5   7   9


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0, iOdd = 0, iEven = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1,iOdd = 1,iEven = 2; jCnt <= iCol; jCnt++,iEven+=2,iOdd+=2)
        {
            if((iCnt % 2) != 0)
            {
                printf("%d\t",iEven);
            }
            else
            {
                printf("%d\t",iOdd);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 15>gcc Assignment15_2.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 15>a
    Enter number of rows : 4
    Enter number of columns : 5
    2       4       6       8       10
    1       3       5       7       9
    2       4       6       8       10
    1       3       5       7       9

*/