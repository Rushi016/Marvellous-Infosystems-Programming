//  2. Wirte a program which accept string from user and covert it into
//     upper case.

#include<stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
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

    struprx(arr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>gcc Assignment26_2.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>a
    Enter a string : 
    Marvellous Multi OS
    MARVELLOUS MULTI OS

*/