//  4. Write a program which display smallest digits of all elements from
//     singly linked list.

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE First, int No)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }
}

void Display(PNODE First)
{
    PNODE temp = NULL;

    if(First == NULL)
    {
        printf("Linked List is Empty.\n");
        return;
    }

    temp = First;

    while(temp != NULL)
    {
        printf("| %d |->",temp->data);
        temp = temp->next;
    }

    printf("NULL\n");
}

int Count(PNODE First)
{
    PNODE temp = NULL;
    int iCnt = 0;

    if(First == NULL)
    {
        return iCnt;
    }

    temp = First;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }

    return iCnt;
}

void DisplaySmallDigit(PNODE First)
{
    PNODE temp = First;
    int iDigit = 0, iSmall = 9;

    while(temp != NULL)
    {
        while(temp->data != 0)
        {
            iDigit = temp->data % 10;

            if(iSmall > iDigit)
            {
                iSmall = iDigit;
            }
            
            temp->data = temp->data / 10;
        }

        printf("%d\t",iSmall);

        iSmall = 9;
        temp = temp->next;
    }

    printf("\n");
}

int main()
{
    PNODE Head = NULL;

    int iSize = 0, iValue = 0, i = 0;

    printf("\nHow many elements do you want in the Linked List.\n");
    scanf("%d",&iSize);

    printf("\nEnter your elements : \n");
    for(i = 1; i <= iSize; i++)
    {
        scanf("%d",&iValue);
        InsertLast(&Head,iValue);
    }

    printf("\nElements of the Linked List are : \n");
    Display(Head);
    printf("\nNumber of elements are : %d\n",Count(Head));

    DisplaySmallDigit(Head);

    return 0;
}

/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_43>gcc Assignment43_4.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_43>a

    How many elements do you want in the Linked List.
    4

    Enter your elements :
    11
    250
    532
    415

    Elements of the Linked List are :
    | 11 |->| 250 |->| 532 |->| 415 |->NULL

    Number of elements are : 4
    1       0       2       1

*/