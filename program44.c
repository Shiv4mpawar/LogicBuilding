#include<stdio.h>

void DisplayB(int iNo)
{
    int iCnt = 0; 

    iCnt = iNo;//1  
    
    while(iCnt >= 1) // 2
    {
        printf("%d\t",iCnt);  // 4
        iCnt--; // 3
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayB(iValue);

    return 0;
}