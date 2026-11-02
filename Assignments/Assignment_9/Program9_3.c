#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: EvenFactorial
//  Description  : Computes multiplication of all even numbers up to N
//  Input        : 5
//  Output       : 8
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }
    
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    iRet = EvenFactorial(iValue);
    
    printf("Even Factorial of number is %d\n", iRet);
    
    return EXIT_SUCCESS;
}
