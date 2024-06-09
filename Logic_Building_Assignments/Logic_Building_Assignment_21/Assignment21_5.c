//  5. Accept N numbers from user and accept one another number as NO, return
//     index of first occurence of that NO.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int ProductOdd(int *Arr, int iLength)
{
    int i = 0, iProduct = 1;
    bool flag = false;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            flag = true;
            iProduct = iProduct * Arr[i];
        }
    }

    if(flag == false)
    {
        return 0;
    }
    else
    {
        return iProduct;
    }
}

int main()
{
    int iSize = 0, *Brr = NULL, i = 0, iValue = 0, iRet = 0;

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

    iRet = ProductOdd(Brr,iSize);
    printf("Product of all elements is %d\n",iRet);
    
    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>gcc Assignment21_5.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>a
    How many do you want in array?
    6
    Enter your array elements :
    15
    66
    3
    70
    10
    88
    Entered elements are :
    15      66      3       70      10      88
    Product of all elements is 45

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>a
    How many do you want in array?
    6
    Enter your array elements :
    44
    66
    72
    70
    10
    88
    Entered elements are :
    44      66      72      70      10      88
    Product of all elements is 0


*/