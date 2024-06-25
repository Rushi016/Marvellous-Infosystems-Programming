//  4. Write a recursive program which display below pattern.

#include<stdio.h>

void Display(int iNo, char ch)
{
    if(iNo > 0)
    {   
        printf("%c\t",ch);
        ch++;
        iNo--;

        Display(iNo,ch);
    }
}

int main()
{
    int iValue = 0;
    char ch = '\0';

    printf("Enter a number : \n");
    scanf("%d",&iValue);

    printf("Enter a character : \n");
    scanf(" %c",&ch);

    Display(iValue,ch);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 33>gcc Assignment33_4.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic Building Assignment 33>a
    Enter a number : 
    6
    Enter a character :
    A
    A       B       C       D       E       F

*/