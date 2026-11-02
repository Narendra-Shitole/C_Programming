#include <stdio.h>
#include<stdlib.h>
//////////////////////////////////////////////////////////
//
//  Function Name: MultipleDisplay
//  Description  : Prints the first 5 multiples of a  number
//  Input        : 4
//  Output       : 4 8 12 16 20
//  Date         : 2/ 11 /2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d \t ", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    MultipleDisplay(iValue);
    
    return EXIT_SUCCESS;
}
