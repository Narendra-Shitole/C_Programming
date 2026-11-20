#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: strtogglex
//  Description  : Toggles uppercase letters to lowercase and vice versa
//  Input        : "Marvellous Multi OS"
//  Output       : mARVELLOUS mULTI os
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void strtogglex(char *str)
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
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    strtogglex(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}
