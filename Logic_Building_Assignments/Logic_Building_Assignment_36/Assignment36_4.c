//  4. Write a recursive program which accept number from user and return
//     largest digit.

#include<stdio.h>

int Min(int iNo)
{
    int iDigit = 0;
    static int iMin = 10;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iMin > iDigit)
        {
            iMin = iDigit;
        }

        iNo = iNo / 10;

        Min(iNo);
    }

    return iMin;
}

int main()
{   
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Min(iValue);

    printf("Min digit : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>gcc Assignment36_4.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>a
    Enter a number : 
    87938 
    Min digit : 3

*/