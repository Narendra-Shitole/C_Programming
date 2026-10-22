#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: PrintEven
//  Description  : Accepts a number and prints that many even numbers
//  Input        : 7
//  Output       : 2 4 6 8 10 12 14
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", 2 * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    PrintEven(iValue);
    
    return 0;
}
