#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

/*
iNo = 8;

ino % 1 == 0; 
ino % 2 == 0;
ino % 3 == 0;
ino % 4 == 0;
ino % 5 == 0;
ino % 6 == 0;
ino % 7 == 0;
ino % 8 == 0;

*/