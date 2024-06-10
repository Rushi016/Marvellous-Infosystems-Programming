//  4. Accept N numbers from user and display all such numbers which contains
//     3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int i = 0, iCnt = 0, iNum = 0;

    for(i = 0; i < iLength; i++)
    {
        iNum = Arr[i];

        while(iNum != 0)
        {
            iCnt++;

            if(iCnt > 3)
            {
                break;
            }

            iNum = iNum / 10;
        }

        if(iCnt == 3)
        {
            printf("%d\t",Arr[i]);
        }

        iCnt = 0;
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

    printf("\nFollowing numbers are contains 3 digits\n");
    Digits(Brr,iSize);

    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 22>gcc Assignment22_4.c

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

    Following numbers are contains 3 digits
    665     953     858

*/