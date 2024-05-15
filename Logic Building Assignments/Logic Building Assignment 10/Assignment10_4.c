//  4. Write a program which accept number from user and count frequency of 4 in it.

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iCnt = iCnt + 1;
        }
        iNo = iNo / 10;
    }
    
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);
    printf("Frequency of FOUR in %d is %d",iValue, iRet);

    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>gcc Assignment10_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a 
    Enter a number : 2395
    Frequency of FOUR in 2395 is 1

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a   
    Enter a number : 1018
    Frequency of FOUR in 1018 is 0

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 9000 
    Frequency of FOUR in 9000 is 0

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a   
    Enter a number : 922432
    Frequency of FOUR in 922432 is 3

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a   
    Enter a number : 2
    Frequency of FOUR in 2 is 1

*/