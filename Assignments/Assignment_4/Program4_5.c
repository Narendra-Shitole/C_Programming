#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckDivisibility
//  Description  : Verifies whether the given number is divisible by 5 without a remainder.
//  Input        : 15
//  Output       : divisible
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void CheckDivisibility(int iValue)
{
    if(iValue % 5 == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}
