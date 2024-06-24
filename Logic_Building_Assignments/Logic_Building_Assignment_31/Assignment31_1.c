//  1. Write a program which accept string from user count number of words
//     from string.

#include<stdio.h>

int WordCount(char *src)
{
    int iCount = 0;
    int iWordLen = 0;

    while (*src != '\0')
    {
        while(*src == ' ')
        {
            *src++;
        }   

        if(*src == '\0')
        {
            break;
        }

        iCount++;

        while(*src != ' ' && *src != '\0')
        {
            iWordLen++;
            *src++;
        }

        if(iWordLen == 1)
        {
            iCount--;
        }
        iWordLen = 0;
    }

    return iCount;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    iRet = WordCount(arr);
    printf("Number of words : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>gcc Assignment31_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>a
    Enter a string :
    Marvellous Multi OS
    Number of words : 3

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>a
    Enter a string : 
            Marvellous Multi         OS     Pune
    Number of words : 4

*/