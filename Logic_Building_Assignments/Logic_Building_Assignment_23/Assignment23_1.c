//  1. Accept Character from user and check whether it is alphabet or not
//     (A-Z a-z).

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char ch)
{
    bool bflag = false;

    if(((ch >= 'a') && (ch <= 'z')) || ((ch >= 'A') && (ch <= 'Z')))
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

    bRet = ChkAlpha(cValue);
    if(bRet == false)
    {
        printf("%c is NOT character\n",cValue);
    }
    else
    {
        printf("%c is character\n",cValue);
    }

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    H
    H is character

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    k
    k is character

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    5
    5 is NOT character

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    ^
    ^ is NOT character

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    Z
    Z is character

*/