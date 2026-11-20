#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountChar
//  Description  : Counts how many times a given character appears in the string
//  Input        : "Marvellous Multi OS", 'M'
//  Output       : 2
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int CountChar(char *str, char ch)
{
    int iCount = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return EXIT_SUCCESS;
}
