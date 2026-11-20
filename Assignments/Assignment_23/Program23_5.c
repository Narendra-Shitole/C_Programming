#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountWhite
//  Description  : Counts the total number of space characters in a string
//  Input        : "MarvellouS Infosystems"
//  Output       : 1
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int CountWhite(char *str)
{
    int iCount = 0;

    if(str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    iRet = CountWhite(arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
