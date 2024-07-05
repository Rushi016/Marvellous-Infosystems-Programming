//  2. Write a program which displays all elements which are prime from
//     singly linear linked list.

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

void DisplayPrime(PNODE First)
{
    PNODE temp = NULL;
    temp = First;
    int i = 0, iCnt = 0;

    while(temp != NULL)
    {
        for(i = 1; i <= temp->data; i++)
        {
            if(((temp->data) % i) == 0)
            {
                if(iCnt > 2)
                {
                    break;
                }

                iCnt++;
            }
        }

        if(iCnt == 2)
        {
            printf("%d\t",temp->data);
        }

        temp = temp->next;
        iCnt = 0;
    }

    printf("\n");
}

int main()
{
    PNODE Head = NULL;
    int iSize = 0, iValue = 0, iRet = 0, i = 0;

    printf("\nHow many elements do you want in Linked List : \n");
    scanf("%d",&iSize);

    printf("Enter Elements : \n");

    for(i = 1; i <= iSize; i++)
    {
        scanf("%d",&iValue);
        InsertLast(&Head,iValue);
    }

    printf("\nElements of the Linked List are : \n");
    Display(Head);
    iRet = Count(Head);
    printf("\nNumber of elements : %d\n",iRet);

    printf("\nPrime numbers are : \n");
    DisplayPrime(Head);

    return 0;
}

/*

    Output :
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_42>gcc Assignment42_2.c 

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_42>a

    How many elements do you want in Linked List :
    6
    Enter Elements :
    11
    20
    17
    41
    22
    89

    Elements of the Linked List are :
    | 11 |->| 20 |->| 17 |->| 41 |->| 22 |->| 89 |->NULL

    Number of elements : 6

    Prime numbers are :
    11      17      41      89    

*/