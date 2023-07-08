#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node *next;
}NODE, *PNODE, **PPNODE;

class SinglyLL
{
    private:
        PNODE First;    // Characteristics
        int iCount;     // Characteristics

    public:
        SinglyLL();

        void InsertFirst(int no);
        void InsertLsst(int no);
        void InsertAtPos(int no,int ipos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int ipos);

        void Display();
        void Count();


};

// Implementations of all behaviours 
int main()
{
    SinglyLL obj1();

    return 0;
}