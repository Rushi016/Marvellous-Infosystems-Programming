//  5. Write a program which accept area in square feet and convert it into
//     square meter. (1 squre feet = 0.0929 square meter)

#include <stdio.h>

double SquareMeter(int iSqft)
{
    return iSqft * 0.0929;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter a area in (Sq.ft) : ");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("%d Sq.ft = %lf Sq.meter",iValue,dRet);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>gcc Assignment8_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>a
    Enter a area in (Sq.ft) : 5
    5 Sq.ft = 0.464500 Sq.meter

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>a
    Enter a area in (Sq.ft) : 7
    7 Sq.ft = 0.650300 Sq.meter

*/