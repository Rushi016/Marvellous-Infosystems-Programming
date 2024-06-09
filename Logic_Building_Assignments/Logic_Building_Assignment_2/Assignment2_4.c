//  4. Accept two numbers from user and display first number in second
//     number of times.

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    //Updator
    if(iFrequency <= 0)
    {
        iFrequency = -iFrequency;
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    printf("Enter Frequency : ");
    scanf("%d",&iCount);

    Display(iValue, iCount);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 2>gcc Assignment2_4.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 2>a
    Enter number : 12
    Enter Frequency : 5
    12      12      12      12      12
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 2>a
    Enter number : -2
    Enter Frequency : 3
    -2      -2      -2
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 2>a
    Enter number : 21
    Enter Frequency : -3
    21      21      21
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 2>a
    Enter number : -2
    Enter Frequency : 0

*/