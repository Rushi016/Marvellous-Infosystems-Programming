//  5. Wirte a recursive program which accept number from user and return its
//     reverse number.

#include<stdio.h>

int Reverse(int iNo)
{
    static int iRev = 0;

    if(iNo != 0)
    {
        iRev = (iRev * 10) + (iNo % 10);

        Reverse(iNo / 10);
    }

    return iRev;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Reverse(iValue);
    printf("Reverse number : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>gcc Assignment36_5.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>a
    Enter a number : 
    523
    Reverse number : 325

*/