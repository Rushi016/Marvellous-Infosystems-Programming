//  1. Accept N numbers from user and accept one another number as NO, check
//     whether NO is present or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkNumber(int *Arr, int iLength, int iNo)
{
    int i = 0;
    bool flag = false;

    for(i = 0; i < iLength; i++)
    {
        if((*(Arr + i)) == iNo)
        {
            flag = true;
            break;
        }
    }

    return flag;
}

int main()
{
    int iSize = 0, *Brr = NULL, i = 0, iValue = 0;
    bool bRet = false;

    printf("How many do you want in array?\n");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));
    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter your array elements : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",&Brr[i]);
    }

    printf("Entered elements are : \n");
    for(i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }
    printf("\n");

    printf("Which number do you want to check in your array : \n");
    scanf("%d",&iValue);

    bRet = ChkNumber(Brr,iSize,iValue);
    if(bRet == false)
    {
        printf("FALSE\n");
    }
    else
    {
        printf("TRUE\n");
    }

    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>gcc Assignment21_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>a
    How many do you want in array?
    6
    Enter your array elements :
    85
    66
    3
    66
    93
    88
    Entered elements are :
    85      66      3       66      93      88
    Which number do you want to check in your array :
    66
    TRUE

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>a
    How many do you want in array?
    6
    Enter your array elements :
    85
    11
    3
    15
    11
    111
    Entered elements are :
    85      11      3       15      11      111
    Which number do you want to check in your array :
    12
    FALSE

*/