//  5. Write a program which accept number from user and display its table
//     in reverse order.

#include<stdio.h>

void Table(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 10; i >= 1; i--)
    {
        printf("%d\t",(i*iNo));
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Table(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>gcc Assignment6_5.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : 2
    20      18      16      14      12      10      8       6       4       2

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : 5
    50      45      40      35      30      25      20      15      10      5

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : -5
    50      45      40      35      30      25      20      15      10      5

*/