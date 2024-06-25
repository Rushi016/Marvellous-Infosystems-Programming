//  3. Write a recursive program which accept string from user and count 
//     number of small characters.

#include<stdio.h>

int Small(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;

        Small(str);
    }

    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%[^'\n']s",arr);

    iRet = Small(arr);

    printf("Number of small characters : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>gcc Assignment36_3.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 36>a
    Enter a string : 
    HElloWOrlD
    Number of small characters : 5

*/