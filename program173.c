#include<stdio.h>
#define ERR_NOTFOUND -1  // Eroor code

int FirstOccurance(char *str,char cValue)
{
    int iCnt = 1;

    while((*str != '\0') && (*str != cValue))   // without brek keyword
    {

        str++;
        iCnt++;
    }
    
    if(*str == '\0')
    {
        return ERR_NOTFOUND;
    }
    else
    {
        return iCnt;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^'\n]s",Arr);

    printf("Enter the character : \n");
    scanf(" %c",&ch);

    iRet = FirstOccurance(Arr,ch); // Arr is call by add & ch is call by value

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such character\n");
    }
    else
    {
        printf("First occurance of that charcter is at : %d\n",iRet);
    }

    return 0;
}