#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;     
}NODE, *PNODE,**PPNODE;


void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  // #

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;

    }
    else                // LL contains at least one node in it
    {
        (*Head)-> prev = newn;  // #         // sequence is not imp
        newn->next = *Head;                 //  sequence is not imp
        *Head = newn;                       // at the last 
    }   

}


void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    
    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  // #

    if(*Head == NULL)   // LL is empty
    {
        *Head = newn;

    }
    else                // LL contains at least one node in it
    {

    }
}

void InsertAtPos(PPNODE Head, int No,int iPos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head, int No)
{}

void DeleteAtPos(PPNODE Head, int iPos)
{}

void Display(PNODE Head)
{
    printf("Elements of Linked List are : \n");

    printf("NULL <=> ");
    while(Head != NULL)
    {
        printf("| %d |<=>",Head->data);
        Head = Head-> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head-> next;
    }
    return iCount;
}

int main()
{
    int iRet = 0;

    PNODE First = NULL;

    InsertFirst(&First,101);
    InsertFirst(&First,51);
    InsertFirst(&First,21);
    InsertFirst(&First,11);

    iRet = Count(First);
    printf("Number of elements are : %d\n",iRet);

    Display(First);


    return 0;
}