#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: RangeDisplay
//  Description  : Displays all numbers between the given start and end points
//  Input        : 23  35
//  Output       : 23 24 25 26 27 28 29 30 31 32 33 34 35
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;
    
    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d \t ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point: ");
    scanf("%d", &iValue1);
    
    printf("Enter ending point: ");
    scanf("%d", &iValue2);
    
    RangeDisplay(iValue1, iValue2);
    
    return EXIT_SUCCESS;
}
