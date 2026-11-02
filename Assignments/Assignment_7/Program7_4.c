#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////
//
//  Function Name: OddDisplay
//  Description  : Prints all odd numbers
//  Input        : 18 
//  Output       : 1 3 5 7 9 11 13
//  Date         : 2/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void OddDisplay(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            printf("%d \t ", iCnt);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    OddDisplay(iValue);
    
    return EXIT_SUCCESS;
}
