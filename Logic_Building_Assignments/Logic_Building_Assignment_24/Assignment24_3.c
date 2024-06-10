//  3. Accept character from user. If it is capital then display all the 
//     characters from the input characters till Z. If input character is
//     small the print all the characters in reverse order till a. In other
//     cases return directly.

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        while(ch >= 'a')
        {
            printf("%c\t",ch);

            ch--;
        }
        printf("\n");
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        while(ch <= 'Z')
        {
            printf("%c\t",ch);

            ch++;
        }
        printf("\n");
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter a character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>gcc Assignment24_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter a character : 
    Q
    Q       R       S       T       U       V       W       X       Y       Z

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter a character : 
    m
    m       l       k       j       i       h       g       f       e       d       c       b   a

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter a character : 
    8

*/