//  2. Write a program which accept string from user and copy the contents
//     of that string into another string. (Implement strncy() function)

//     Note: If third parameter is greate than the size of source string 
//     then copy whole string into desitnation.

#include<stdio.h>

void strncpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt != 0))
    {
        *dest = *src;
        *src++;
        *dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    printf("%s\n",arr);
    strncpyX(arr, brr, 10);

    printf("%s\n",brr);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 28>gcc Assignment28_2.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 28>a
    Marvellous Multi OS
    Marvellous

*/