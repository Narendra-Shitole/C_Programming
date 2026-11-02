#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Factorial
//  Description  : Calculates and returns the factorial of a number
//  Input        : 5
//  Output       : 120 (5*4*3*2*1)
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
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
    
    iRet = Factorial(iValue);
    
    printf("Factorial of number is %d\n", iRet);
    
    return EXIT_SUCCESS;
}
