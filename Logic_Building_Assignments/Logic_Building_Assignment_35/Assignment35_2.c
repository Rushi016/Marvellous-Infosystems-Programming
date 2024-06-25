//  2. Write a recursive program which accept number from user and return
//     summation of its digits.

#include<stdio.h>

int Sum(int iNo)
{
    int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;

        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Sum(iValue);

    printf("Summation of digits : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>gcc Assignment35_2.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>a
    Enter a number : 
    879
    Summation of digits : 24

*/