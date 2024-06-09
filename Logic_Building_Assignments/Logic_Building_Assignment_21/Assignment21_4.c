//  4. Accept N numbers from user and accept Range, Display all elements from
//     that range.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int Range(int *Arr, int iLength, int iStart, int iEnd)
{
    int i = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] >= iStart) && (Arr[i] <= iEnd))
        {
            printf("%d\t",Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize = 0, *Brr = NULL, i = 0, iValue = 0, iRet = 0, iValue1 = 0, iValue2 = 0;

    printf("How many elements do you want in array?\n");
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

    printf("Start : ");
    scanf("%d",&iValue1);

    printf("End : ");
    scanf("%d",&iValue2);

    Range(Brr,iSize,iValue1,iValue2);
    
    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>gcc Assignment21_4.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>a
    How many elements do you want in array?
    6
    Enter your array elements : 
    85
    66
    3
    76
    93
    88
    Entered elements are :
    85      66      3       76      93      88
    Start : 60
    End : 90
    85      66      76      88

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>a
    How many elements do you want in array?
    6
    Enter your array elements :
    85
    66
    3
    76
    93
    88
    Entered elements are :
    85      66      3       76      93      88
    Start : 30
    End : 50

*/