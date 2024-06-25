//  2. Write a recursive program which accept number from user and return
//     largest digit.

#include<stdio.h>

int Max(int iNo)
{
    int iDigit = 0;
    static int iMax = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iMax < iDigit)
        {
            iMax = iDigit;
        }

        iNo = iNo / 10;

        Max(iNo);
    }

    return iMax;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Max(iValue);

    printf("Max digit : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>gcc Assignment36_2.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>a
    Enter a number : 
    87983
    Max digit : 9

*/