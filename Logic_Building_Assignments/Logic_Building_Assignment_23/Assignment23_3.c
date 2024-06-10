//  3. Accept Character from user and check whether it is digit or not
//     (0-9).

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char ch)
{
    bool bflag = false;

    if(((ch >= '0') && (ch <= '9')))
    {
        bflag = true;
        return bflag;
    }

    return bflag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkDigit(cValue);
    if(bRet == false)
    {
        printf("FALSE\n");
    }
    else
    {
        printf("TRUE\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>gcc Assignment23_3.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    6
    TRUE

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    f
    FALSE

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    +
    FALSE

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character :
    H
    FALSE
*/