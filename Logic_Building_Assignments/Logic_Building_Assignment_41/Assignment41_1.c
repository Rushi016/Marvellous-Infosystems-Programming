//  1. Write a program which search first occurrence of particular element
//     from singly linear liked list.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE First,int No)
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
        printf("Linked List Empty.");
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

int SearchFirstOcc(PNODE First, int No)
{
    PNODE temp = NULL;
    temp = First;
    int iCnt = 0;
    bool flag = false;

    while(temp != NULL)
    {   
        iCnt++;
        if(temp->data == No)
        {
            flag = true;
            break;
        }
        temp = temp->next;
    }

    if(flag == false)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    PNODE Head = NULL;
    int iSearch = 0, iSize = 0, iValue = 0, iRet = 0, i = 0;

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

    printf("\nEnter Search Element : \n");
    scanf("%d",&iSearch);

    iRet = SearchFirstOcc(Head,iSearch);

    if(iRet == -1)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("First occurrence of the element at position : %d\n",iRet);
    }

    return 0;
}


/*

    Output:
    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_41>gcc Assignment41_1.c

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_41>a

    How many elements do you want in Linked List : 
    7 
    Enter Elements :
    10
    20
    30
    40
    50
    30
    70

    Elements of the Linked List are :
    | 10 |->| 20 |->| 30 |->| 40 |->| 50 |->| 30 |->| 70 |->NULL

    Number of elements : 7

    Enter Search Element :
    30
    First occurrence of the element at position : 3

    D:\Marvellous_Infosystems\Logic_Building_with_Industrial_Project_Batch\Logic_Building_Assignments\Logic_Building_Assignment_41>a

    How many elements do you want in Linked List :
    7
    Enter Elements :
    10
    20
    30
    40
    50
    30
    70

    Elements of the Linked List are :
    | 10 |->| 20 |->| 30 |->| 40 |->| 50 |->| 30 |->| 70 |->NULL

    Number of elements : 7

    Enter Search Element :
    60
    Element not found

*/