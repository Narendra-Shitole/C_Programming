#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: FactorialDiff
//  Description  : Returns the difference between even factorial and odd factorial
//  Input        : 5
//  Output       : -7
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int EvenFactorial(int iNo);
int OddFactorial(int iNo);

int FactorialDiff(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    return EvenFactorial(iNo) - OddFactorial(iNo);
}

int EvenFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = 2; iCnt <= iNo; iCnt += 2)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int OddFactorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt += 2)
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
    
    iRet = FactorialDiff(iValue);
    
    printf("Factorial difference is %d\n", iRet);
    
    return EXIT_SUCCESS;
}
