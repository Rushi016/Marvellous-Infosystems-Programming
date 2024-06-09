//  4. Accept one character from user and convert case of that character.

#include<stdio.h>

char DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        return cValue + 32;
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        return cValue - 32;
    }
    else
    {
        return '\0';
    }
}

int main()
{
    char cValue = '\0', Character = '\0';

    printf("Enter your character : ");
    scanf("%c",&cValue);

    Character = DisplayConvert(cValue);
    if(Character == '\0')
    {
        printf("%c is not a alphabate",cValue);
    }
    else
    {
        printf("%c",Character);
    }

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 3>gcc Assignment3_4.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 3>a
    Enter your character : a
    A
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 3>a
    Enter your character : D
    d
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 3>a
    Enter your character : @
    @ is not a alphabate

*/