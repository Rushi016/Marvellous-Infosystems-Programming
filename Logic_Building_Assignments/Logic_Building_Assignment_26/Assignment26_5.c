//  5. Wirte a program which accept string from user and count number of
//     white spaces.

#include<stdio.h>

int CountWhite(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n]s",arr);

    iRet = CountWhite(arr);
    printf("Spaces : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>gcc Assignment26_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>a
    Enter a string : 
    MarvellouS
    Spaces : 0

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>a
    Enter a string : 
    MarvellouS Infosystems
    Spaces : 1

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 26>a
    Enter a string :
    MarvellouS Infosystems by Piyush Manohar Khairnar
    Spaces : 5

*/