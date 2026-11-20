#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////
//
//  Function Name: ChkSpecial
//  Description  : Checks whether the character is one of (!, @, #, $, %, ^, &, *)
//  Input        : %
//  Output       : TRUE (It is special Character)
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
BOOL ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') ||
       (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return EXIT_SUCCESS;
}
