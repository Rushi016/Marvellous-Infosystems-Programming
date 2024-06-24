//  3. Write a program which accept string from user and reverse each word 
//     in place.

#include<stdio.h>

int StrWordRev(char *str)
{
    char *start = str;
    char *end = str;
    char *wordEnd = NULL;
    char temp = '\0';

    if(str == NULL)
    {
        printf("Unable to allocate the memeory");

        return -1;
    }

    while (*end != '\0')
    {
        // Move end to the end of the current word
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }

        // Reverse the word
        wordEnd = end - 1;        
        while (start < wordEnd)
        {
            temp = *start;
            *start = *wordEnd;
            *wordEnd = temp;
            start++;
            wordEnd--;
        }

        // Move start and end to the next word
        while (*end == ' ')
        {
            end++;
        }
        start = end;
    }
}

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    StrWordRev(arr);
    printf("rev arr = %s\n",arr);

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