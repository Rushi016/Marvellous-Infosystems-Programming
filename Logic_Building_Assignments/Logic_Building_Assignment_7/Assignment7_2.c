//  2. Accept amount in US dollar and return its corresponding value in Indian
//     currency. (Consider 1$ as 70 rupees).

#include<stdio.h>

float DollarToINR(int iNo)
{
    return iNo * 83.53;
}

int main()
{
    int iValue = 0;
    float iRet = 0.0;

    printf("Enter number of USD : ");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);
    printf("Value of %d $ in INR is %f Rs.",iValue,iRet);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>gcc Assignment7_2.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter number of USD : 10
    Value of 10 $ in INR is 835.299988 Rs.

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter number of USD : 3
    Value of 3 $ in INR is 250.589996 Rs.

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 7>a
    Enter number of USD : 1200
    Value of 1200 $ in INR is 100236.000000 Rs.

*/