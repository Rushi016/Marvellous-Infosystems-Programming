//  4. Write a program which accept temperature in Fahrenheit and convert it
//     into celsius. (1 celsius = (Fahrenheit - 32) * (5/9))

#include<stdio.h>

double FhToCs(float fFahrenheit)
{
    double dRet = 0.0;
    dRet = ((fFahrenheit - 32)*5)/9;
    
    return dRet;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter a temperature in Fahrenheit : ");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);
    printf("%f F = %lf oC",fValue,dRet);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>gcc Assignment8_4.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>a
    Enter a temperature in Fahrenheit : 10
    10.000000 F = -12.222222 oC

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>a
    Enter a temperature in Fahrenheit : 34
    34.000000 F = 1.111111 oC

*/