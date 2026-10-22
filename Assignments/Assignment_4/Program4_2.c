#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckEvenOdd
//  Description  : Checks whether the given number is even or odd.
//  Input        : 2
//  Output       : even
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void CheckEvenOdd(int iValue)
{
    if(iValue % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;

}