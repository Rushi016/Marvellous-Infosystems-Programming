//  2. Accept N numbers from user and return differency between frequency 
//     of even number and odd numbers.

#include<stdio.h>
#include<stdlib.h>

int Frequency(int *Arr, int iLength)
{
    int i = 0, iCountEven = 0, iCountOdd = 0;

    for(i = 0; i < iLength; i++)
    {
        if((*(Arr + i) % 2) == 0)
        {
            iCountEven++;
        }
        else
        {
            iCountOdd++;
        }
    }

    return iCountEven - iCountOdd;
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
    printf("Difference between frequency of even number and odd number are : %d\n",iRet);

    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 20>gcc Assignment20_2.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 20>a
    How many elements do you want in your array : 
    7
    Please enter your array elements : 
    85
    66
    3
    80
    93
    88
    90
    Entered Array Elements are :
    85      66      3       80      93      88      90
    Difference between frequency of even number and odd number are : 1

*/