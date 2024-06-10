//  3. Accept N numbers from user and return the difference between 
//     largest and smallest number.

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt = 0, iMin = Arr[0], iMax = Arr[0];

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }

    return iMax - iMin;
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

    iRet = Difference(Brr,iSize);
    printf("\nDifference between Largest and Smallest number is : %d\n",iRet);

    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 22>gcc Assignment22_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 22>a
    How many elements do you want in the Array: 
    6
    Enter the array elements :
    85
    66
    3
    66
    93
    88

    Your Entered Array is :
    85      66      3       66      93      88

    Difference between Largest and Smallest number is : 90

*/