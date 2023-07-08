// Write a program which checks whether number is divisible by 3 and 5.

#include<stdio.h>           // For printf and scanf 
#include<stdbool.h>         //  For bool data type  //1982 

////////////////////////////////////////////////////////////////////////////
//
//   Funtion name : CheckDivisible
//   Input :        Integer
//   Output :       Boolean
//   Description :  Checks whether input is divisible by 3 and 5
//   Author :       Shivam Yogeshsing Pawar
//   Date :         25/04/2023
//
//////////////////////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)      // in java :- checkEventOdd()
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

//////////////////////////////////////////////////////////////////////////////
// Entry Point function 
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int main()
{
    int iValue = 0;                    // Variable to accept input 
    bool bRet = false;                 // Variable to accept return value

    printf("Please enter number to check whether it is divisible by 3 And 5 :\n");
    scanf("%d",&iValue);
    
    bRet = CheckDivisible(iValue);    // Funtion call
    
    if(bRet == true)
    {
        printf("%d is completely divisible by 3 and 5 \n",iValue);
    }
    else 
    {
        printf("%d is not completely divisible by 3 and 5 \n",iValue);
    } 
    return 0;
}


/*
   Logical Operators

    1 : Logical AND &&
    2 : Logical OR  ||

    -----------------------------------------------
    Expression1     Expression2     &&      ||
    -----------------------------------------------
    true            true            true    true
    true            false           false   true
    false           false           flase   false
    false           true            false   true
    -----------------------------------------------                 
*/
