#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Displays the ASCII value of a character in Decimal, Octal, and Hexadecimal
//  Input        : A
//  Output       : Decimal 65, Octal 0101, Hexadecimal 0X41
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Display(char ch)
{
    printf("Decimal\t\t%d\n", ch);
    printf("Octal\t\t0%o\n", ch);
    printf("Hexadecimal\t0X%X\n", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
