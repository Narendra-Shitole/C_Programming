#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: FirstChar
//  Description  : Returns the 0-based index of the first occurrence of a character
//  Input        : "Marvellous Multi OS", 'e'
//  Output       : 4
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            return iCnt;
        }
        iCnt++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return EXIT_SUCCESS;
}
