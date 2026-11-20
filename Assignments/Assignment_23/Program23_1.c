#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: strlwrx
//  Description  : Converts uppercase characters in a string to lowercase
//  Input        : "Marvellous Multi OS"
//  Output       : marvellous multi os
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void strlwrx(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    strlwrx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}
