//  4. Write a recursive program which accept number from user and return its
//     factorial.

#include<stdio.h>

int Fact(int iNo)
{
    static int iFact = 1;

    if(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;

        Fact(iNo);
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    iRet = Fact(iValue);

    printf("Factorial : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>gcc Assignment35_4.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>a
    Enter a number : 
    5
    Factorial : 120

*/