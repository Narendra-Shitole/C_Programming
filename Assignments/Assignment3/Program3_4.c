#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayConvert
//  Description  : Converts lowercase character to uppercase and vice versa
//  Input        : a
//  Output       : A
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void DisplayConvert(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
    {
        printf("%c\n", cValue - 32);
    }
    else if(cValue >= 'A' && cValue <= 'Z')
    {
        printf("%c\n", cValue + 32);
    }
}

int main()
{
    char cValue = '\0';
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    DisplayConvert(cValue);
    
    return 0;
}
