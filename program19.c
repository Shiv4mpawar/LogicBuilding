#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)    // Filter for negitive input
    {
        printf("Error : Invalid Input. \n");
        printf("Note : Please enter the positive number\n");
        return;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter frequency :\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}