#include <stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////
//
//  Function Name: ChkVowel
//  Description  : Checks whether a character is a vowel or not
//  Input        : E
//  Output       : True 
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
BOOL ChkVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u' ||
       cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U')
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
    
    printf("Enter character\n");
    scanf("%c", &cValue);
    
    bRet = ChkVowel(cValue);
    
    if(bRet == TRUE)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }
    
    return 0;
}
