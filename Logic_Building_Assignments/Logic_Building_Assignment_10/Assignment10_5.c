//  5. Write a program which accept number from user and count frequency of such a
//     digits which are less than 6.

#include<stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0, iCnt = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < 6)
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

    iRet = CountTwo(iValue);
    printf("Frequency of a digit which are lesst that in %d is %d",iValue, iRet);

    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>gcc Assignment10_5.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 2395
    Frequency of a digit which are lesst that in 2395 is 3

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 1018
    Frequency of a digit which are lesst that in 1018 is 3

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 9440
    Frequency of a digit which are lesst that in 9440 is 3

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 96672
    Frequency of a digit which are lesst that in 96672 is 1

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 6 
    Frequency of a digit which are lesst that in 6 is 0

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 10>a
    Enter a number : 0
    Frequency of a digit which are lesst that in 0 is 0
*/