//  2. Write a program which accept string from user and print below pattern.

#include<stdio.h>

void Pattern(char *str)
{
    int iCount = 0, i = 0, j = 0;
    char *src = str;

    while(*str != ' ' && *str != '\0')
    {
        iCount++;
        str++;
    }

    str = src;

    for(i = 0; i < iCount; i++)
    {
        j = i;

        while((*str != ' ') && (j < iCount) && (*str != '\0'))
        {
            printf("%c ",*str);
            str++;
            j++;
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
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 32>gcc Assignment32_2.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 32>a
    Enter a string : 
    Marvellous
    M a r v e l l o u s
    M a r v e l l o u
    M a r v e l l o
    M a r v e l l
    M a r v e l
    M a r v e 
    M a r v
    M a r
    M a
    M

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 32>a
    Enter a string : 
    PPA
    P P A
    P P
    P

*/