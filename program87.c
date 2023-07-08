// accept no. from user as well as and check whether that no is present on that number 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Search(int Arr[],int iLength,int iNo) // 
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag == true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0 , iValue = 0;
    bool bRet = false;
    
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

    bRet = Search(ptr,iSize,iValue);
    if(bRet == true)
    {
        printf("%d is present in the array\n",iValue);
    }
    else
    {
        printf("%d is not present in the array\n",iValue);
    }
    free(ptr);

    return 0;
}
// linir search