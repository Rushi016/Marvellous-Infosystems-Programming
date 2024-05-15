//  4. Write a program which accept number from user and return the multiplication of
//     digits.

#include<stdio.h>

int MultDigits(int iNo)
{
    int iDigit = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
             iMult = iMult * iDigit;
        }
        iNo = iNo / 10;
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    iRet = MultDigits(iValue);
    printf("Multiplication of all digits in %d is %d",iValue, iRet);

    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>gcc Assignment11_4.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 2395
    Multiplication of all digits in 2395 is 270

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 1018
    Multiplication of all digits in 1018 is 8

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 9440
    Multiplication of all digits in 9440 is 144

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 11>a
    Enter a number : 922432
    Multiplication of all digits in 922432 is 864

*/