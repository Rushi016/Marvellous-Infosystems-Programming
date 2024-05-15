//  1. Write a program which accept number from user and display its
//     multiplication of factors.

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0;
    int Mult = 1;

    if(iNo == 0)
    {
        return iCnt;
    }
    else if(iNo < 0)
    {
        for(iCnt = -1; iCnt >= iNo; iCnt--)
        {
            if((iNo % iCnt) == 0)
            {
                Mult = Mult*iCnt;
            }
        }
    }
    else
    {
        for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
        {
            if((iNo % iCnt) == 0)
            {
                Mult = Mult*iCnt;
            }
        }
    }

    return Mult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter your number : \n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    if(iRet == 0)
    {
        printf("Factors multiplication of %d is %d",iValue,iRet);
    }
    else
    {
        printf("Factors multiplication of %d is %d",iValue,iRet);
    }

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>gcc Assignment4_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter your number :
    12
    Factors multiplication of 12 is 144
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter your number :
    13
    Factors multiplication of 13 is 1
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 4>a
    Enter your number :
    10
    Factors multiplication of 10 is 10

*/