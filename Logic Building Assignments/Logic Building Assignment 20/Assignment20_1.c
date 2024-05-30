//  1. Accept N numbers from user and return frequency of even numbers.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr, int iLength)
{
    int i = 0, iCount = 0;

    for(i = 0; i < iLength; i++)
    {
        if((*(Arr + i) % 2) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

int main()
{
    int iSize = 0, i = 0, iRet = 0;
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

    iRet = Frequency(Brr,iSize);
    printf("Frequency of even numbers are : %d\n",iRet);

    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 20>gcc Assignment20_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 20>a
    How many elements do you want in your array : 
    6
    Please enter your array elements :
    85
    66
    3
    80
    93
    88
    Entered Array Elements are :
    85      66      3       80      93      88
    Frequency of even numbers are : 3

*/