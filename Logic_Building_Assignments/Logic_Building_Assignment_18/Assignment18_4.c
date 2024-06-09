//  4. Accept number of rows and number of columns from user and display below pattern.
//     Input:   iRow = 6    iCol = 6
//     Output:  *   *   *   *   *   *     
//              *   #   #   #   *   *    
//              *   #   #    *  $   *             
//              *   #   *   $   $   *   
//              *   *   $   $   $   *
//              *   *   *   *   *   *
         
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0, r = 1, c = iCol, flag = 0;

    if(iRow != iCol)
    {
        printf("Row and Column size must be same\n");
        return;
    }

    for(iCnt = 1; iCnt <= iRow; iCnt++,r++,c--)
    {
        for(jCnt = 1,flag = 0; jCnt <= iCol; jCnt++)
        {
            if(iCnt == 1 || jCnt == 1 || iCnt == iRow || jCnt == iCol)
            {
                printf("*\t");
            }
            else if((iCnt == r && jCnt == c))
            {
                printf("*\t");
                flag = 1;
            }
            else if(flag == 0)
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
    *(1,1)  *(1,2)  *(1,3)  #(1,4)  
    *(2,1)  *(2,2)  #(2,3)  @(2,4)  
    *(3,1)  #(3,2)  @(3,3)  @(2,4)  
    #(4,1)  @(4,2)  @(4,3)  @(4,4)

        D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 18>gcc Assignment18_4.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 18>a
    Enter number of rows : 6
    Enter number of columns : 6
    *       *       *       *       *       *
    *       #       #       #       *       *
    *       #       #       *       $       *
    *       #       *       $       $       *
    *       *       $       $       $       *
    *       *       *       *       *       *    

*/