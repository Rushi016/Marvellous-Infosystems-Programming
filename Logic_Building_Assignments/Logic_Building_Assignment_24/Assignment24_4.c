//  4. Accept Character from user and check whether it is special symbol or
//     not (!, @, #, $, %, ^, &, *).

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') || (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return true;
    }

    return false;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>gcc Assignment24_4.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter the character : 
    @
    TRUE

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter the character : 
    d
    FALSE

*/