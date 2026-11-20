#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayASCII
//  Description  : Displays ASCII table with Symbol, Decimal, Hexadecimal, and Octal from 0 to 255
//  Input        : None
//  Output       : Complete ASCII table (0 to 255)
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void DisplayASCII()
{
    int iCnt = 0;

    printf("Symbol\tDecimal\tHex\tOctal\n");
    for(iCnt = 0; iCnt <= 255; iCnt++)
    {
        printf("%c\t%d\t%X\t%o\n", iCnt, iCnt, iCnt, iCnt);
    }
}

int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}
