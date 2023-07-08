#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////
// Entry point function 
//////////////////////////////////////////////////////////////
int CountDigitFrequency(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 8)
        {
            iCount++;
        }
        iNo = iNo / 10;
        return iCount;
    }
}

int main()
{
    int iValue = 0;
    bool iRet = 0;


    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigitFrequency(iValue);
    printf("Frequency of 8 is :%d\n",iRet);

    return 0;
}


