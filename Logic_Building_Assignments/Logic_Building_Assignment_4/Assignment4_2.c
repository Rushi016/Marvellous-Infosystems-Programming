//  2. Write a program which accept number from user and display its
//     factors in decreasing order.

#include<stdio.h>

void FactRevOrder(int iNo)
{
    int iCnt = 0;

    if(iNo == 0)
    {
        printf("There are infinte factors of zero");
    }
    else if(iNo == 1)
    {
        printf("%d",iNo);
    }
    else
    {
        for(iCnt = (iNo/2); iCnt >= 1; iCnt--)
        {
            if((iNo % iCnt) == 0)
            {
                printf("%d\t",iCnt);
            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    FactRevOrder(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>gcc Assignment4_2.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number :
    12
    6       4       3       2       1
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number :
    13
    1
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number :
    10
    5       2       1

*/