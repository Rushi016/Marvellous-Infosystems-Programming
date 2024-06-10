//  3. Write a program which accept string from user and return difference between
//     frequency of small characters and frequency of capital characters.

#include<stdio.h>

int Difference(char *str)
{
    int iCap = 0, iSmall = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCap++;
        }
        else
        {
            continue;
        }
        str++;
    }

    return iSmall - iCap;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);
    printf("%d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 25>gcc Assignment25_3.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 25>a
    Enter string
    MarvellouS
    6

*/