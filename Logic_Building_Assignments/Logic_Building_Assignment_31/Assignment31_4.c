//  4. Write a program which accept string from user and copy the contents
//     into another string by removing extra white spaces.

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
    if(src == NULL)
    {
        printf("Memory not allocated");
    }

    while(*src != '\0')
    {
        while(*src != ' ' && *src != '\0')
        {
            *dest = *src;
            src++;
            dest++;
        }

        while(*src == ' ')
        {
            src++;
        }

        if(*src != '\0')
        {
            *dest = ' ';
            dest++;
        }
    }

    *dest = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr,brr);
    printf(brr);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>gcc Assignment31_4.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>a
    Enter a string : 
    Marvellous   multi    OS
    Marvellous multi OS

*/