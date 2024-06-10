//  5. Accept character from user and display its ASCII value in decimal,
//     octal and hexadecimal format.

#include<stdio.h>

void Display(char ch)
{
    printf("Decimal\t\t%d\n",ch);
    printf("Octal\t\t0%o\n",ch);
    printf("Hexadecimal\t0X%X\n",ch); 
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>gcc Assignment24_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 24>a
    Enter the character : 
    A
    Decimal         65
    Octal           0101
    Hexadecimal     0X41

*/