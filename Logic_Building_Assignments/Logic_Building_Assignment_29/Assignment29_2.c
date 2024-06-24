//  2. Write a program which accept string from user and copy that characters
//     of that string into another string in reverse order by removing all.
//     white spaces.

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    int iCnt = 0;

    while(*src != '\0')
    {
        *src++;
        iCnt++;
    }

    *src--;

    while(iCnt > 0)
    {
        if(*src != ' ')
        {
            *dest = *src;
            *dest++;
        }
        *src--;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "Marvellous Python";
    char brr[30];

    printf("%s\n",arr);

    StrCpyRev(arr, brr);

    printf("%s\n",brr);

    return 0;
}

/*

Output:
D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 29>gcc Assignment29_2.c 

D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 29>a
Marvellous Python
nohtyPsuollevraM


*/