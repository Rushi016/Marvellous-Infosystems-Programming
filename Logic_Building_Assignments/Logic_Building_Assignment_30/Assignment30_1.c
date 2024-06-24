//  1. Write a program which accepts 2 strings from user and concat N characters
//     of second string after first string. Value of N should be accepted from
//     user. (Implement strncat() function).

//  Note: If third parameter is greater than the size of second string then
//  concat whole string after first string.

#include<stdio.h>

void strncatX(char *src, char *dest, int iCnt)
{
    while(*src != '\0')
    {
        src++;
    }
    *src = ' ';
    *src++;

    while((*dest != '\0') && (iCnt != 0))
    {
        *src = *dest;
        iCnt--;
        *src++;
        *dest++;
    }

    *dest = '\0';
}

int main()
{
    int iValue = 0;
    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Logic Building";

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("%s\n%s\n",arr,brr);

    strncatX(arr, brr, iValue);

    printf("%s\n",arr);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>gcc Assignment30_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
    Enter a number : 
    5
    Marvellous Infosystems
    Logic Building
    Marvellous Infosystems Logic

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
    Enter a number :
    20
    Marvellous Infosystems
    Logic Building
    Marvellous Infosystems Logic Building

*/