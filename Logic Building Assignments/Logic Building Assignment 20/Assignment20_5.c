//  5. Accept N numbers from user and accept one another number as NO, return
//     frequency of NO form it.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Frequency(int *Arr, int iLength, int iNO)
{
    int i = 0, iCount = 0;

    for(i = 0; i < iLength; i++)
    {
        if(*(Arr + i) == iNO)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, i = 0, iValue = 0, iRet = 0;
    int *Brr = NULL;

    printf("How many elements do you want in your array : \n");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));

    printf("Please enter your array elements : \n");
    for(i = 0; i < iSize; i++)
    {
        scanf("%d",(Brr+i));
    }

    printf("Entered Array Elements are : \n");
    for(i = 0; i < iSize; i++)
    {
        printf("%d\t",*(Brr+i));
    }
    printf("\n");

    printf("Which number frequency do you want to check from the above array\n");
    scanf("%d",&iValue);

    iRet = Frequency(Brr,iSize,iValue);
    printf("Frequency of %d are : %d\n",iValue,iRet);

    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 20>gcc Assignment20_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 20>a
    How many elements do you want in your array : 
    6
    Please enter your array elements : 
    85
    66
    3
    66
    93
    88
    Entered Array Elements are :
    85      66      3       66      93      88
    Which number frequency do you want to check from the above array
    66
    Frequency of 66 are : 2

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 20>a
    How many elements do you want in your array : 
    6
    Please enter your array elements :
    85
    11
    15
    11
    111
    13
    Entered Array Elements are :
    85      11      15      11      111     13
    Which number frequency do you want to check from the above array
    12
    Frequency of 12 are : 0

*/