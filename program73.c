#include<stdio.h>   // IO
#include<stdlib.h>  // Memory management 

int main()      // Entry point function
{
    int iCnt = 0;
    int Arr[5]; 

    printf("Entr the elements :\n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of array are : \n");

    for(iCnt = 0; iCnt < 5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    return 0;           // Return success to OS
}