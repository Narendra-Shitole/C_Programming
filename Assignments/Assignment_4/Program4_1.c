#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckNumber
//  Description  : Checks if the given number is positive, negative, or zero.
//  Input        : 2
//  Output       : positive
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number\n");
    }
    else if(iValue < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
