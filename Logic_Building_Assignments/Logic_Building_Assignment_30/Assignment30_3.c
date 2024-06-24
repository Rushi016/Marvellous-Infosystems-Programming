//  3. Write a program which accepts 2 strings from user and check whether first
//     N contents of two strings are equal or not. (Implement strcmp() function).

#include<stdio.h>
#include<stdbool.h>

bool strncatX(char *src, char *dest, int iCnt)
{
    while((iCnt != 0) && (*src != '\0') && (*dest != '\0'))
    {
        if(*src != *dest)
        {
            break;
        }
        src++;
        dest++;
        iCnt--;
    }

    if((*src == *dest))
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
    int iValue = 0;

    char arr[30] = "Marvellous Infosystems";
    char brr[30] = "Marvellous Logic Building";

    printf("%s\n%s\n",arr,brr);
    printf("Enter a number : \n");
    scanf("%d",&iValue);

    bRet = strncatX(arr, brr, iValue);
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
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>gcc Assignment30_3.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
    Marvellous Infosystems
    Marvellous Logic Building
    Enter a number :
    9
    Both strings are equal

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
    Marvellous Infosystems
    Marvellous Logic Building
    Enter a number :
    10
    Both strings are equal

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
    Marvellous Infosystems
    Marvellous Logic Building
    Enter a number :
    11
    Both strings are not eqaul

*/