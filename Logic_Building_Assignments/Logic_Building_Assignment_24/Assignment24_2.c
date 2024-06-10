//  2. Accept character from user. If character is small display its corresponding
//     capital character, and if it capital the display its corresponding small.
//     In other case display as it is.

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n",(ch-32));
    }
    else if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n",(ch+32));
    }
    else
    {
        printf("%c\n",ch);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>gcc Assignment24_2.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter a character : 
    Q
    q

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter a character : 
    m
    M

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter a character : 
    4
    4

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter a character :
    %
    %


*/