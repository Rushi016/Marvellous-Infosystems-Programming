//  5. Accept number of rows and number of columns from user and display below pattern.
//     Input:   iRow = 4    iCol = 4
//     Output:  1   2   3   4   5     
//              1   2           5    
//              1       3       5             
//              1           4   5   
//              1   2   3   4   5
//              
         
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int iCnt = 0, jCnt = 0;

    if(iRow != iCol)
    {
        printf("Row and Column size must be same\n");
        return;
    }

    for(iCnt = 1; iCnt <= iRow; iCnt++)
    {
        for(jCnt = 1; jCnt <= iCol; jCnt++)
        {
            if(iCnt == 1 || jCnt == 1 || iCnt == iRow || jCnt == iCol || iCnt == jCnt)
            {
                printf("%d\t",jCnt);
            }
            else
            {
                printf(" \t");
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



*/