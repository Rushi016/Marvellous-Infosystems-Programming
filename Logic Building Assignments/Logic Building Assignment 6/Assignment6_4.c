//  4. Write a program which accept number from user and display its table.

#include<stdio.h>

void Table(int iNo)
{
    int i = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 1; i <= 10; i++)
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>gcc Assignment6_4.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : 2
    2       4       6       8       10      12      14      16      18      20

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : 5
    5       10      15      20      25      30      35      40      45      50

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : -5
    5       10      15      20      25      30      35      40      45      50

*/