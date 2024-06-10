//  1. Write a program which accept string from user and accept one character.
//     Check whether that character is present in string or not.

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return true;
        }

        str++;
    }

    return false;
}

int main()
{
    char arr[20], cValue = '\0';
    bool bRet = false;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == false)
    {
        printf("Character not found\n");
    }
    else
    {
        printf("Character found\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>gcc Assignment27_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>a
    Enter a string : 
    Marvellous Multi OS
    Enter the character :
    e
    Character found

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>a 
    Enter a string : 
    Marvellous Multi OS
    Enter the character :
    W
    Character not found

*/