// last index

// return the index and return the first occourence 
// accept no. from user as well as and check whether that no is present on that number 
#include<stdio.h>
#include<stdlib.h>

#define ERR_NOTFOUND -1 // Eronious

int SearchLastOccurance(int Arr[],int iLength,int iNo) // 
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;

    for(iCnt = iLength -1; iCnt>= 0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
           break;
        }
    }
    return iCnt;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0 , iValue = 0,iRet = 0;
        
    printf("Enter number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));   //memoryallocation 

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

    iRet = SearchLastOccurance(&ptr,iSize,iValue);
    
    if(iRet == ERR_NOTFOUND)
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