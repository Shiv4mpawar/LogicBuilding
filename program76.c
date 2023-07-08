// Acccept N numbrs from user and perform the adddition of N numbers
#include<stdio.h>// IO
#include<stdlib.h>// Memory management 

int Addition(int Arr[], int iLength)
{
    // Step 5 : Perform the operation on array
    int iSum = 0;
    int iCnt = 0;

    for(iCnt = 0; iSum < iLength; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
    return iSum;
} 

int main()  // Entry point function
{
    int iSize = 0;      // to store size of array
    int *ptr = NULL;    // To store address of array
    int iCnt = 0;       // Loop Counter 
    int iRet = 0;

    // Step1 : Accept the number of elemnts from user 
    printf("Enter number of elements :\n");
    scanf("%d",&iSize);

    // Step 2 : Allocate memory Dynamically
    ptr = malloc(iSize * sizeof(int));

    // Step 3 : Accept the values from user 
    printf("Enter the elements :\n");
    for(iCnt = 0; iCnt < iSize; iCnt++)  
    {
        scanf("%d",&ptr[iCnt]);  //6
    }

    printf("Elements of array are : \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }
    
    
    // Step 4: Pass the array to the function 
    iRet = Addition(ptr,iSize);        // Demo(400,4);  // call by address
    
    printf("Addition is : %d\n",iRet);

    // Step 6: Deallocate the memory of array
    free(ptr);

    return 0;// Return success to OS
}