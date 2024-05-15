//  5. Write a program which accept number from user and return difference
//     between summation of all its factors and non factors.

#include<stdio.h>

int FactDiff(int iNo)
{
    int i = 0, iSum1 = 0, iSum2 = 0, iDiff = 0;

    for(i = 1; i < iNo; i++)
    {
        if((iNo % i) == 0)
        {
            iSum1 = iSum1 + i;
        }
        else
        {
            iSum2 = iSum2 + i;
        }
    }

    return iDiff = iSum1 - iSum2;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);
    printf("Difference between factors and non factors of %d is : %d",iValue,iRet);
    
    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number : 12
    Difference between factors and non factors of 12 is : -34
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter a number : 10
    Difference between factors and non factors of 10 is : -29

*/