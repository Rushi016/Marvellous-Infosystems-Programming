//  5. Write a program which 2 strings from user and concat second string
//     after first string. (Implement strcat() function).

#include<stdio.h>

void strcatX(char *src, char *dest)
{
    while(*src != '\0')
    {
        *src++;
    }

    while(*dest != '\0')
    {
        *src = *dest;
        *dest++;
        *src++;
    }

    *src = '\0';
}

int main()
{
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = " Logic Building";

    printf("First String: %s\n",arr);
    printf("Second String: %s\n", brr);

    strcatX(arr, brr);

    printf("%s\n",arr);       //Marvellous Infosystems Logic Building

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 28>gcc Assignment28_5.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 28>a
    First String: Marvellous Infosystems
    Second String:  Logic Building
    Marvellous Infosystems Logic Building

*/