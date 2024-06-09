//  2. Accept N numbers from user and accept one another number as NO, return
//     index of first occurence of that NO.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int FirstOcc(int *Arr, int iLength, int iNo)
{
    int i = 0;
    bool flag = false;

    for(i = 0; i < iLength; i++)
    {
        if((*(Arr + i)) == iNo)
        {
            flag = true;
            return i;
        }
    }

    return -1;
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

    printf("Which number do you want to check in your array : \n");
    scanf("%d",&iValue);

    iRet = FirstOcc(Brr,iSize,iValue);
    printf("%d\n",iRet);
    
    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 21>gcc Assignment21_2.c 

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
    1

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
    -1   

*/