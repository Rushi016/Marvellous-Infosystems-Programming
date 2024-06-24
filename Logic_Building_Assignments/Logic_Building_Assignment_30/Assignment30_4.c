//  4. Accept string from user and reverse the contents of that string by
//     toggling the the case.

#include<stdio.h>

void StrRevTogX(char *src, char *dest)
{
    int iCnt = 0;

    while(*src != '\0')
    {
        src++;
        iCnt++;
    }
    src--;

    while(iCnt != 0)
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = *src - 32;
        }
        else if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src + 32;
        }
        else
        {
            *dest = *src;
        }

        src--;
        dest++;
        iCnt--;
    }

    *dest = '\0';
}

int main()
{
    char arr[30] = "aCBdef";
    char brr[30];

    printf("%s\n",arr);

    StrRevTogX(arr,brr);

    printf("%s\n",brr);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>gcc Assignment30_4.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
    aCBdef
    FEDbcA

*/