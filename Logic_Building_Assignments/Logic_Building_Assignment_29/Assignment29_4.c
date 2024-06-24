//  4. Write a program which accept string from user and copy that characters
//     of that string into another string by converting all capital characters
//     into small case.

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;
        }

        src++;
        dest++;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python 2";
    char brr[30];

    printf("%s\n",arr);

    StrCpyCap(arr,brr);

    printf("%s\n",brr);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 29>gcc Assignment29_4.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 29>a
    Marvellous Python 2
    marvellous python 2

*/