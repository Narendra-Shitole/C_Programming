#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Converts capital to small, small to capital, and prints others as-is
//  Input        : Q
//  Output       : q
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c\n", ch + 32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c\n", ch - 32);
    }
    else
    {
        printf("%c\n", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
