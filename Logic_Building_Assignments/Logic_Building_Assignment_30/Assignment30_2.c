//  2. Write a program which accepts 2 strings from user and check whether
//     contents of two strings are equal or not. (Implement strcmp() function).

#include<stdio.h>
#include<stdbool.h>

bool strncatX(char *src, char *dest)
{
    while((*src != '\0') && (*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
    }

    if((*src == '\0') && (*dest == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    bool bRet = false;

    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Marvel Infosystems";

    printf("%s\n%s\n",arr,brr);

    bRet = strncatX(arr, brr);
    if(bRet == false)
    {
        printf("Both strings are not eqaul\n");
    }
    else
    {
        printf("Both strings are equal\n");
    }

    return 0;
}

/*

Output:
D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>gcc Assignment30_2.c

D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
Marvellous Infosystems
Marvellous Infosystems
Both strings are equal

D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
Marvellous Infosystems
Marvel Infosystems
Both strings are not eqaul

*/