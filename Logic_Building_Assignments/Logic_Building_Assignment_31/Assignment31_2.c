//  2. Write a program which accept string from user and return length of
//     largest word.

#include<stdio.h>

int WordCount(char *src)
{
    int iWordLen = 0;
    int iMax = 0;

    while (*src != '\0')
    {
        while(*src == ' ')
        {
            src++;
        }   

        if(*src == '\0')
        {
            break;
        }

        while(*src != ' ' && *src != '\0')
        {
            iWordLen++;
            src++;
        }

        if(iMax <= iWordLen)
        {
            iMax = iWordLen;
        }
        iWordLen = 0;
    }

    return iMax;
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    iRet = WordCount(arr);
    printf("Length of largest words : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>gcc Assignment31_2.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>a
    Enter a string : 
    Marvellous Multi OS Infosystems
    Length of largest words : 11

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 31>a
    Enter a string :
    Rushikesh Vitthal Sable
    Length of largest words : 9

*/