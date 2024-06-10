//  1. Wirte a program which accept string from user and covert it into
//     lower case.

#include<stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        printf("%c",*str);
        str++;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n]s",arr);

    strlwrx(arr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>gcc Assignment26_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>a
    Enter a string : 
    Marvellous Multi OS
    marvellous multi os

*/