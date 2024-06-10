//  5. Accept N numbers from user and display summation of digits of each numbeer.

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int i = 0, iNum = 0, iSum = 0, iDigit = 0;

    for(i = 0; i < iLength; i++)
    {
        iNum = Arr[i];

        while(iNum != 0)
        {
            iDigit = iNum % 10;
            iSum = iSum + iDigit;
            iNum = iNum / 10;
        }

        printf("%d\t",iSum);

        iSum = 0;
    }

    printf("\n");
}

int main()
{   
    int iSize = 0, *Brr = NULL, iCnt = 0, iRet = 0;

    printf("How many elements do you want in the Array: \n");
    scanf("%d",&iSize);

    Brr = (int *)malloc(iSize * sizeof(int));

    if(Brr == NULL)
    {
        printf("Unable to allocate memory\n");
        return -1;
    }

    printf("Enter the array elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&Brr[iCnt]);
    }
    printf("\n");

    printf("Your Entered Array is : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    { 
        printf("%d\t",Brr[iCnt]);
    }
    printf("\n");

    printf("\nSummation of digits of each number : \n");
    DigitsSum(Brr,iSize);

    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 22>gcc Assignment22_5.c 

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 22>a
    How many elements do you want in the Array: 
    6
    Enter the array elements :
    8225
    665
    3
    76
    953
    858

    Your Entered Array is :
    8225    665     3       76      953     858

    Summation of digits of each number :
    17      17      3       13      17      21

*/