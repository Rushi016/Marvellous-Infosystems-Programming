//  5. Write a recursive program which accept number from user and return its
//     product of digits.

#include<stdio.h>

int Mult(int iNo)
{
    static int iMult = 1;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
        
        Mult(iNo);
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Mult(iValue);

    printf("Product of Digits : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>gcc Assignment35_5.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>a
    Enter a number : 
    523
    Product of Digits : 30

*/