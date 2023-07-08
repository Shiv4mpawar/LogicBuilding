// we have to maximum number 
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
   int iCnt = 0;
   int iMin = Arr[0];

   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
   }
    return iMin;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));//memoryallocation 

    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Minimum(ptr,iSize);
    printf("Smallestnts is %d ",iRet);

    free(ptr);

    return 0;
}