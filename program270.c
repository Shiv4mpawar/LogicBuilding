#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;      // #
}NODE, *PNODE,**PPNODE;


void InsertFirst(PPNODE Head, int no)
{
    
}

void InsertLast(PPNODE Head, int no)
{

}

void InsertAtPos(PPNODE Head, int no,int iPos)
{}

void DeleteFirst(PPNODE Head)
{}

void DeleteLast(PPNODE Head, int no)
{}

void DeleteAtPos(PPNODE Head, int iPos)
{}

void Display(PNODE Head)
{}

int Count(PNODE Head,int no)
{
    return 0;
}

int main()
{
    PNODE First = NULL;



    return 0;
}