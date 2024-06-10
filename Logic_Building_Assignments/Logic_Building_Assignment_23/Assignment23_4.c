//  4. Accept Character from user and check whether it is capital or not
//     (A-Z).

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char ch)
{
    bool bflag = false;

    if(((ch >= 'a') && (ch <= 'z')))
    {
        bflag = true;
        return bflag;
    }

    return bflag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = ChkCapital(cValue);
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
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>gcc Assignment23_4.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    d
    TRUE

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 23>a
    Enter the character : 
    G
    FALSE
   
*/