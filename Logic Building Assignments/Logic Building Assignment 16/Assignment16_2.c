//  1. Accept number of rows and number of columns from user and display below pattern.
//     Input:   iRow = 4    iCol = 4
//     Output:  *   *   *   *   
//              *   *   *   # (2, 4)
//              *   *   #   # (3, 4)
//              *   #   #   # (4, 4)
//                (4,2)(4,3)
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    for(iCnt = 0; iCnt < iRow; iCnt++)
    {
        jCnt = 0;
        for(jCnt = 0; jCnt < iCol; jCnt++)
        {
/*
*(1,1)  *(1,2)  *(1,3)  *(1,4)  *(1,5)  *(1,6)
*(2,1)  *(2,2)  *(2,3)  *(2,4)  *(2,5)  #(2,6)
*(3,1)  *(3,2)  *(3,3)  *(2,3)  #(3,5)  #(3,6)
*(4,1)  *(4,2)  *(4,3)  #(4,4)  #(4,5)  #(4,6)
*(5,1)  *(5,2)  #(5,3)  #(5,4)  #(5,5)  #(5,6)
*(6,1)  #(6,2)  #(6,3)  #(6,4)  #(6,5)  #(6,6)
*/  
            if(jCnt < iCol - iCnt)
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 16>gcc Assignment16_4.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 16>a
    Enter number of rows : 6
    Enter number of columns : 5
    *       *       *       *       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       *       *       *       *

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 16>a
    Enter number of rows : 10
    Enter number of columns : 5
    *       *       *       *       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       @       @       @       *
    *       *       *       *       *

*/