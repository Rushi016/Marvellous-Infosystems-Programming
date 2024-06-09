//  3. Accept N numbers from user check whether that numbers contains 11 in 
//     it or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkNumber(int *Arr, int iLength)
{
    int i = 0;
    bool flag = false;

    for(i = 0; i < iLength; i++)
    {
        if(*(Arr + i) == 11)
        {
            flag = true;
            break;
        }
    }

    return flag;
}

int main()
{
    int iSize = 0, i = 0;
    bool bRet = false;
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

    bRet = ChkNumber(Brr,iSize);
    if(bRet == false)
    {
        printf("11 is absent\n");
    }
    else
    {
        printf("11 is present\n");
    }

    free(Brr);

    return 0;
}

/*

    Output:
    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 20>gcc Assignment20_3.c

    D:\Marvellous Infosystems\Logic Building with Industrial Project Batch\Logic Building Assignments\Logic Building Assignment 20>a
    How many elements do you want in your array : 
    6
    Please enter your array elements :
    85
    66
    11
    80
    93
    88
    Entered Array Elements are :
    85      66      11      80      93      88
    11 is present

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
    11 is absent

*/