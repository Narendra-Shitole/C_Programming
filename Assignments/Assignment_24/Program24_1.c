#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

//////////////////////////////////////////////////////////
//
//  Function Name: ChkChar
//  Description  : Checks whether a given character is present in the string
//  Input        : "Marvellous Multi OS", 'e'
//  Output       : TRUE (Character found)
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
BOOL ChkChar(char *str, char ch)
{
    if(str == NULL)
    {
        return FALSE;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }
        str++;
    }

    return FALSE;
}

int main()
{
    char arr[50] = {'\0'};
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return EXIT_SUCCESS;
}
