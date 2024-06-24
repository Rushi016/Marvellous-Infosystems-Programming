//  5. Write a program which accept string from user and replace each
//     occurrence of first character of each word into capital case.

#include<stdio.h>

void StrCpyX(char *src)
{
    int iCount = 0;

    if(src == NULL)
    {
        printf("Memory not allocated");
    }

    while(*src != '\0')
    {
        while(*src != ' ' && *src != '\0')
        {
            iCount++;

            if(iCount == 1)
            {
                if((*src >= 'a') && (*src <= 'z'))
                {
                    *src = *src - 32;
                }
            }

            src++;
        }

        iCount = 0;

        while(*src == ' ')
        {
            src++;
        }
    }
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    StrCpyX(arr);
    printf(arr);
    printf("\n");

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>gcc Assignment31_5.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>a
    Enter a string : 
    marvellous infosystems by Piyush Khairnar
    Marvellous Infosystems By Piyush Khairnar

*/