#include <stdio.h>
#include <stdlib.h>
//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Prints a number line
//  Input        : 4
//  Output       : -4 -3 -2 -1 0 1 2 3 4
//  Date         : 2 /11 /2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
    {
        printf("%d \t ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Display(iValue);
    
    return EXIT_SUCCESS;
}
