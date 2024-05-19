//  3. Accept number of rows and number of columns from user and display below pattern.
//     Input:   iRow = 5    iCol = 5
//     Output:  $   *   *   *   *     
//              #   $   *   *   *     
//              #   #   $   *   *   
//              #   #   #   $   *   
//              #   #   #   #   $            
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iRow; jCnt++)
        {
            if(iCnt < jCnt)
            {
                printf("*\t");
            }
            else if(iCnt > jCnt)
            {
                printf("#\t");
            }
            else
            {
                printf("$\t");
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 17>gcc Assignment17_3.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 17>a
    Enter number of rows : 5
    Enter number of columns : 5
    $       *       *       *       *
    #       $       *       *       *
    #       #       $       *       *
    #       #       #       $       *
    #       #       #       #       $

*/