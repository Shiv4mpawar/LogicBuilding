// return the index and return the first occourence 
 // accept no. from user as well as and check whether that no is present on that number 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int SearchFirstOccurance(int Arr[],int iLength,int iNo) // 
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iLength)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0 , iValue = 0,iRet = 0;
        
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));//memoryallocation 

    printf("Enter the elements: \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    
    printf("Enter the element that you want to search : \n");
    scanf("%d",&iValue);


    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = SearchFirstOccurance(&ptr,iSize,iValue);
    
    if(iRet == -1)
    {
        printf("There is no such element \n");
    }
    else
    {
        printf("%d occured at index %d\n",iValue,iRet);
    }
    free(ptr);

    return 0;
}// linir search