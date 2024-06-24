//  1. Write a program which accept string from user and print below pattern.

#include<stdio.h>

void Pattern(char *str)
{
    int iCount = 0, i = 1;
    char *src = str;

    while(*str != ' ' && *str != '\0')
    {
        iCount++;
        str++;
    }

    str = src;

    for(i = 1; i <= iCount; i++)
    {
        while(*str != ' ' && *str != '\0')
        {
            printf("%c ",*str);
            str++;
        }
        printf("\n");

        str = src;
    }
}

int main()
{
    char arr[30];
    
    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    Pattern(arr);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 32>gcc Assignment32_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 32>a
    Enter a string : 
    Marvellous
    M a r v e l l o u s
    M a r v e l l o u s
    M a r v e l l o u s
    M a r v e l l o u s
    M a r v e l l o u s
    M a r v e l l o u s 
    M a r v e l l o u s
    M a r v e l l o u s 
    M a r v e l l o u s
    M a r v e l l o u s

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 32>a
    Enter a string : 
    PPA
    P P A
    P P A
    P P A

*/