//  4. Wirte a program which accept string from user and display only digits
//     from that string.

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }

        str++;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter a string : \n");
    scanf("%[^'\n]s",arr);

    DisplayDigit(arr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>gcc Assignment26_4.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>a
    Enter a string : 
    marve89llous121
    89121

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>a
    Enter a string : 
    Demo


*/