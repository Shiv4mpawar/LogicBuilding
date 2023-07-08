#include<stdio.h>
//////////////////////////////////////////////////////////////
// Entry point function 
//////////////////////////////////////////////////////////////

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    for(; iNo != 0;)    // conversion while to for loop
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    DisplayDigits(iValue);
    return 0;
}


