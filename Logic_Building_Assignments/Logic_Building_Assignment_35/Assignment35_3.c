//  3. Write a recursive program which accept number from user and count
//     number of characters.

#include<stdio.h>

int strlenX(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;

        strlenX(str);
    }

    return iCnt;
}

int main()
{
    char arr[30];
    int iRet = 0;

    printf("Enter a string : \n");
    scanf("%s",arr);

    iRet = strlenX(arr);

    printf("Count of characters : %d\n",iRet);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>gcc Assignment35_3.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 35>a
    Enter a string : 
    Hello
    Count of characters : 5

*/