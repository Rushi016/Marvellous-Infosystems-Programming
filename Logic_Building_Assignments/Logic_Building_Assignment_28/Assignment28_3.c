//  3. Write a program which accept string from user and copy capital characters
//     of that string into another string.

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while((*src != '\0'))
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src;
            *dest++;
        }

        *src++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30];

    printf("%s\n",arr);
    StrCpyCap(arr, brr);

    printf("%s\n",brr);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 28>gcc Assignment28_3.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 28>a
    Marvellous Multi OS
    MMOS

*/