//  2. Write a program which accept string from user and accept one character.
//     Return frequency of that character.

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20], cValue = '\0';
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = CountChar(arr, cValue);
    printf("Frequency of %c : %d\n",cValue,iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>gcc Assignment27_2.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>a
    Enter a string : 
    Marvellous Multi OS
    Enter the character :
    M
    Frequency of M : 2

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>a
    Enter a string :
    Marvellous Multi OS
    Enter the character :
    W
    Frequency of W : 0

*/