//  5. Accept string from user and check whether the string is palindrome
//     or not without considering its case.

#include<stdio.h>
#include<stdbool.h>

bool StrPallindrome(char *src)
{
    bool flag = true;

    char *start = src;
    char *end = src;

    while(*end != '\0')
    {
        end++;
    }
    end--;
    
    while(start <= end)
    {
        if((*start >= 'a') && (*start <= 'z'))
        {
            *start = *start - 32;
        }

        if((*end >= 'a') && (*end <= 'z'))
        {
            *end = *end - 32;
        }

        if(*start != *end)
        {
            flag = false;
            break;
        }
        
        start++;
        end--;
    }

    return flag;
}

int main()
{
    bool bRet = false;

    char arr[30] = "1abccBA1";
    char brr[30];

    printf("%s\n",arr);
    bRet = StrPallindrome(arr);
    printf("%s\n",arr);

    if(bRet == false)
    {
        printf("String is not pallindrome\n");
    }
    else
    {
        printf("String is pallindrome\n");
    }

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>gcc Assignment30_5.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
    aabaa
    AABAA
    String is pallindrome

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 30>a
    1abccBA1
    1ABCCBA1
    String is pallindrome

*/