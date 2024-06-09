//  2. Write a program which accept width and height of rectangle from user
//     and calculate its area. (Area = Width * Height)

#include<stdio.h>

double RectArea(float fWidth, float fHeigth)
{
    return fWidth * fHeigth;
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter a Width : ");
    scanf("%f",&fValue1);

    printf("Enter a Height : ");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);
    printf("Area of rectangle is : %f",dRet);
    printf("\n");

    return 0;
}

/*

Output:
D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>gcc Assignment8_2.c

D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 8>a
Enter a Width : 5.3
Enter a Height : 9.78
Area of rectangle is : 51.834000

*/