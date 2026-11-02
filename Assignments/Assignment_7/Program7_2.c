#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Prints all linear numbers up to the given number
//  Input        : 8
//  Output       : 1 2 3 4 5 6 7 8
//  Date         : 2 /11 /2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
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
