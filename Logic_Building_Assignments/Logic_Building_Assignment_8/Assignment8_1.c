//  1. Wirte a program which accept radius of circle from user and calculate
//     its area. Consider value of PI as 3.14. (Area = PI * Radius * Radius)

#include<stdio.h>

double CircleArea(float iRadius)
{
    float PI = 3.14;

    return PI * iRadius * iRadius;
}

int main()
{
    float fValue = 0;
    double dRet = 0.0;

    printf("Enter a radius : ");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area of circle is : %f",dRet);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>gcc Assignment8_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>a
    Enter a radius : 5.3
    Area of circle is : 88.202609

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>a
    Enter a radius : 10
    Area of circle is : 314.000010

*/