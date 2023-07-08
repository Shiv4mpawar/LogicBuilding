#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct node *next;
}NODE, *PNODE,**PPNODE;

// 1 : Allocat memory for new node
// 2 : Initalise the node 
// 3 : Check whether LL is empty or not
// 4 : If LL is empty store address for newnode in First
// 5 : Otherwise store the address of newnode inside next pointer of old first node
// 6 : Upadate First pointer with the address for new node

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    
    newn = (PNODE)malloc(sizeof(NODE)); //  1

    newn -> data = no;                  //  2
    newn -> next = NULL;

    if(*Head == NULL)                   //  3
    {
        *Head = newn;                   // 4
    }
    else
    {
        newn -> next = *Head;           // 5
        *Head = newn;                    // 6
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE)); //  1

    PNODE temp = *Head;

    newn -> data = no;                  //  2
    newn -> next = NULL;

    if(*Head == NULL)                   //  3
    {
        *Head = newn;                   // 4
    }
    else
    {
        while(temp -> next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
}

void Display(PNODE Head)
{
    printf("Elements of LinkedList are : \n");

    while(Head != NULL)
    {
        printf("| %d | -> ",Head -> data);
        Head = Head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE Head)
{
    int iCount = 0;

    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{

    if(*Head == NULL)
    {
        return;
    }
    else if((*Head) -> next == NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {

    }
}


int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First,11);     // InsertFirst(60,11);
    InsertFirst(&First,21);     // InsertFirst(60,21);
    InsertLast(&First,51);
    InsertLast(&First,101);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);
    
    InsertLast(&First,10);
    InsertLast(&First,20);

    Display(First);
    
    iRet = Count(First);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(First);
    DeleteFirst(First);

    Display(First);

    iRet = Count(First);
    printf("Number fo nodes are : %d\n",iRet);
       
    return 0;
}