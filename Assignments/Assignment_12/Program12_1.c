#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayDigit
//  Description  : Accepts a number and displays its digits in reverse order
//  Input        : 2395
//  Output       : 5 9 3 2 
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
        
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        printf("%d\n", iDigit);
        iNo = iNo / 10;
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    DisplayDigit(iValue);
    
    return EXIT_SUCCESS;
}
