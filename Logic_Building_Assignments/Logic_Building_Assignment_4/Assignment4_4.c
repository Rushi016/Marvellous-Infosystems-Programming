//  4. Write a program which accept number from user and return summation
//     of all its non factors.

#include<stdio.h>

int NonFact(int iNo)
{
    int i = 0;
    int Sum = 0;

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) != 0)
        {
            Sum = Sum + i;
        }
    }

    return Sum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = NonFact(iValue);
    printf("Summation of all non factors of %d is : %d",iValue,iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>gcc Assignment4_4.c  

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number : 12
    Summation of all non factors of 12 is : 50
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number : 10
    Summation of all non factors of 10 is : 37

*/