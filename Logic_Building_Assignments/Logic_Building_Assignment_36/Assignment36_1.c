//  1. Write a recursive program which accept string from user and count white
//     spaces.

#include<stdio.h>

int WhiteSpace(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }

        str++;

        WhiteSpace(str);
    }

    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    iRet = WhiteSpace(arr);

    printf("Number of white spaces are : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>gcc Assignment36_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>a
    Enter a string : 
    HE llo WOr ID
    Number of white spaces are : 3

*/