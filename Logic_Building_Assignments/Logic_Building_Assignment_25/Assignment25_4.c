//  4. Write a program which accept string from user and check whether it
//     contains vowels in it or not.

#include<stdio.h>
#include<stdbool.h>

int ChkVowel(char *str)
{
    bool bflag = false;

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
           (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            bflag = true;
            break;
        }
        
        str++;
    }

    return bflag;
}

int main()
{
    char arr[20];
    bool bRet = false;

    printf("Enter string\n");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);
    if(bRet == false)
    {
        printf("FALSE\n");
    }
    else
    {
        printf("TRUE\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 25>gcc Assignment25_4.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 25>a
    Enter string
    marvellous
    TRUE

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 25>a 
    Enter string
    Demo
    TRUE

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 25>a
    Enter string
    xyz
    FALSE

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 25>a
    Enter string
    Idea
    TRUE

*/