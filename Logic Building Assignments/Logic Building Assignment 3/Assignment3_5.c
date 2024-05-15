//  5. Accept one character from user and check whether that character
//     is vowel (a, e, i, o, u) or not.

#include<stdio.h>

typedef int BOOL;
#define TRUE 1;
#define FALSE 0;

BOOL ChkVowel(char cValue)
{
    if(cValue == 'A' || cValue == 'a' || cValue == 'E' || cValue == 'e' || cValue == 'I' || cValue == 'i' || cValue == 'O' || cValue == 'o' || cValue == 'U' || cValue == 'u')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL cChar = FALSE;

    printf("Enter your character : \n");
    scanf("%c",&cValue);

    cChar = ChkVowel(cValue);
    if(cChar == 0)
    {
        printf("It is not Vowel");
    }
    else
    {
        printf("It is Vowel");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 3>gcc Assignment3_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 3>a
    Enter your character :
    E
    It is Vowel
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 3>a
    Enter your character :
    d
    It is not Vowel

*/