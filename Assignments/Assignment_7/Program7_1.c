#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Prints  $ and *
//  Input        : 3
//  Output       : $ * $ * $ *
//  Date         : 2 /  11 / 2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Pattern(int iNo)
{
    int iCnt = 0;
    
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ \t * \t ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Pattern(iValue);
    
    return EXIT_SUCCESS;
}
