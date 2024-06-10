//  5. Write a program which accept string from user and display it in reverse
//     order.

#include<stdio.h>
#include<stdbool.h>

void Reverse(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        str++;
        iCnt++;
    }

    while(iCnt >= 0)
    {
        printf("%c",*str);
        str--;
        iCnt--;
    }
    printf("\n");
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 25>gcc Assignment25_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 25>a
    Enter string
    MarvellouS
    SuollevraM

*/