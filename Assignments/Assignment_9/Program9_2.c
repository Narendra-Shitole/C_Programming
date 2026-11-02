#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DollarToINR
//  Description  : Converts USD value to INR value (1 USD = 70 INR)
//  Input        : 10
//  Output       : 700
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int DollarToINR(int iNo)
{
    return iNo * 70;
}

int main()
{
    int iValue = 0, iRet = 0;
    
    printf("Enter number of USD: ");
    scanf("%d", &iValue);
    
    iRet = DollarToINR(iValue);
    
    printf("Value in INR is %d\n", iRet);
    
    return EXIT_SUCCESS;
}
