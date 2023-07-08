#include<iostream>
using namespace std;    // cin cout che obj astat 

class Digit
{
    private:
        int iNo;
    
    public:
        Digit(int X)
        {
            iNo = X;
        }

};

int main()
{
    int iValue = 0;

    cout<<"Enter number : "<<"\n";
    cin>>iValue;
    
    Digit dobj(iValue);
    
    return 0;
}