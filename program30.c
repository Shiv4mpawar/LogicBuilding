// Using Flag 
#include<stdio.h>
#include<stdbool.h>

CheckPrime(int iNo)
{
    int iCnt = 0;
    bool bFlag = true;  // 
    
    for(iCnt = 2; iCnt <= (iNo/2); iCnt++) //   time complexcity :- N/2 if N is prime number otherwise is X/2 
    {
        if((iNo % iCnt) == 0)
        {
            bFlag = false;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is prime number \n",iValue);
    }
    else
    {
        printf("%d is not a prime number \n",iValue);
    }

    return 0;
}