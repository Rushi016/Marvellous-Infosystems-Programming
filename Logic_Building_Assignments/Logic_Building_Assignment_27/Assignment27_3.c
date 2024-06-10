//  3. Write a program which accept string from user and accept one character.
//     Return index of first occurance of that character.

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt = 0, iIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCnt;
            break;
        }

        iCnt++;
        str++;
    }

    return iIndex;
}

int main()
{
    char arr[20], cValue = '\0';
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    printf("Enter the character : \n");
    scanf(" %c",&cValue);

    iRet = FirstChar(arr, cValue);
    printf("First occurance index of %c : %d\n",cValue,iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>gcc Assignment27_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>a
    Enter a string : 
    Marvellous Multi OS
    Enter the character :
    M
    First occurance index of M : 0

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>a
    Enter a string : 
    Marvellous Multi OS
    Enter the character :
    W
    First occurance index of W : -1

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 27>a
    Enter a string : 
    Marvellous Multi OS
    Enter the character :
    e
    First occurance index of e : 4

*/