#include<stdio.h>
//////////////////////////////////////////////////////////////
// Entry point function 
//////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)// nahi hot to paryant 
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;  //self updating statment
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue); // call by value 
    return 0;
}