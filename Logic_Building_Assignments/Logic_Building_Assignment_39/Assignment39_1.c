//  1. Write a program which accept one number from user and count number
//     ON (1) bits in it without using % and / operator.

/*
    iNo = 11;
    iMask = 1;
    i.e. iNo = iNo / 2^iMask;

                    Right Shift Operator
                    1   0   1   1
    0 Inserted----> 0   1   0   1   1---->Discard  

    0000    0000    0000    0000    0000    0000    0000    1101
    0000    0000    0000    0000    0000    0000    0000    0001
    -------------------------------------------------------------&
    0000    0000    0000    0000    0000    0000    0000    0001
*/

#include<stdio.h>

typedef int BOOL;
typedef unsigned int UINT;

#define TRUE 1
#define FALSE 0

int CountOne(UINT iNo)
{
    int iCnt = 0;

    while(iNo)
    {
        //  Check if the least significant bit is 1
        if((iNo & 0x00000001) == 1)
        {
            iCnt++;
        }
        //Right shift the number to check the next bit
        iNo = iNo >> 1;
    }

    return iCnt;
}

int main()
{
    UINT iValue = 0;
    int iRet = 0;

    printf("Enter a number : \n");
    scanf("%u",&iValue);

    iRet = CountOne(iValue);

    printf("Number of 1 bits : %d\n",iRet);

    return 0;
}