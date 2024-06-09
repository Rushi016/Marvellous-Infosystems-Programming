//  2. Accept single digit number from user and print it into word.

#include<stdio.h>

void Display(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iNumber = iNo;

    while (iNo != 0)
    {
        iNo = iNo / 10;
        iDigit = iDigit + 1;
    }

    iNo = iNumber;

    if((iDigit == 1) || (iDigit == 0))
    {
        if(iNo == 0){printf("Zero");}
        if(iNo == 1){printf("One");}
        if(iNo == 2){printf("Two");}
        if(iNo == 3){printf("Three");}
        if(iNo == 4){printf("Four");}
        if(iNo == 5){printf("Five");}
        if(iNo == 6){printf("Six");}
        if(iNo == 7){printf("Seven");}
        if(iNo == 8){printf("Eight");}
        if(iNo == 9){printf("Nine");}
    }
    else{printf("Invalid Number");}

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>gcc Assignment6_2.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : 9
    Nine

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a 
    Enter a number : -3
    Three

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 6>a
    Enter a number : 12
    Invalid Number

*/