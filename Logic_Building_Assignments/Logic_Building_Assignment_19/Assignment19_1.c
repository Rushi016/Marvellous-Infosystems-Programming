//  1. Accept N numbers from user and return difference between summation
//     of even elements and summation of odd elements.

#include<stdio.h>
#include<stdlib.h>

int DifferenceOddEven(int Arr[], int iLength)
{
    int i = 0, iEvenSum = 0, iOddSum = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) != 0)
        {
            iOddSum = iOddSum + Arr[i];
        }
        else
        {
            iEvenSum = iEvenSum + Arr[i];
        }
    }

    return iEvenSum - iOddSum;
}

int main()
{
    int i = 0, iSize = 0, iRet = 0;
    int *Brr = NULL;

    printf("How many elements do you want in the array : \n");
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

    printf("Entered array elements are : \n");
    for(i = 0; i < iSize; i++)
    {
        printf("%d\t",Brr[i]);
    }
    printf("\n");

    iRet = DifferenceOddEven(Brr,iSize);
    printf("Difference is : %d\n",iRet);

    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 19>gcc Assignment19_1.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 19>a
    How many elements do you want in the array : 
    6
    Enter your array elements :
    85
    66
    3
    80 
    93
    88
    Entered array elements are :
    85      66      3       80      93      88
    Difference is : 53

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 19>a
    How many elements do you want in the array : 
    -3
    Unable to allocate memory

*/