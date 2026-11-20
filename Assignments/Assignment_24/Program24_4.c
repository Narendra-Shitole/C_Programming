#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: LastChar
//  Description  : Returns the 0-based index of the last occurrence of a character
//  Input        : "Marvellous Multi OS", 'M'
//  Output       : 11
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    if(str == NULL)
    {
        return -1;
    }

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
    }

    return iPos;
}

int main()
{
    char arr[50] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return EXIT_SUCCESS;
}
