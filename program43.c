#include<stdio.h>


void DisplayF(int iNo)
{
    int iCnt = 0; 

    iCnt = 1;//1  
    
    while(iCnt <= iNo) // 2
    {
        printf("%d\t",iCnt);        // 4
        iCnt++; // 3
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);

    DisplayF(iValue);

    return 0;
}