// Accept no from user and return its average 

#include<stdio.h>// IO
#include<stdlib.h>// Memory management 

float Average(int Arr[], int iLength)
{
    // Step 5 : Perform the operation on array

    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 0; iCnt<iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return ((float)iSum /(float)iLength);
} 

int main()  // Entry point function
{
    int iSize = 0;      // to store size of array
    int *ptr = NULL;    // To store address of array
    int iCnt = 0;       // Loop Counter 
    float fRet = 0;

    // Step1 : Accept the number of elemnts from user 
    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    // Step 2 : Allocate memory Dynamically
    ptr = malloc(iSize * sizeof(int));

    // Step 3 : Accept the values from user 
    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of array are : \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    // Step 4: Pass the array to the function 
    fRet = Average(ptr,iSize);
    printf("Average is : %f\n ",fRet);

    // Step 6: Deallocate the memory of array
    free(ptr);

    return 0;// Return success to OS
}