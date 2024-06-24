//  1. Write a program which accept string from usre and copy the contents
//     of that string into another string. (Implement strcpy() function)

#include<stdio.h>

void strcpyX(char *src, char *dest)
{
    //  Filter
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];   // Empyt string

    strcpyX(arr,brr);

    printf("%s",brr);    // printf("%s",200);     Marvellous Multi OS
    
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 28>gcc Assignment28_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 28>a
    Marvellous Multi OS

*/