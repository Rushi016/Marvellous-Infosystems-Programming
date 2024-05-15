//  3. Write a program which accept distance in kilometre and convert it into metre.
//     (1 kilometre = 1000 meter)

#include<stdio.h>

int KmToMeter(int iKilometre)
{
    return iKilometre * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a distance in (Km) : ");
    scanf("%d",&iValue);

    iRet = KmToMeter(iValue);
    printf("%d kilometre = %d meter",iValue,iRet);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>gcc Assignment8_3.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>a
    Enter a distance in (Km) : 5
    5 kilometre = 5000 meter

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>a
    Enter a distance in (Km) : 12
    12 kilometre = 12000 meter

*/