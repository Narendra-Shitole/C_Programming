#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: struprx
//  Description  : Converts lowercase characters in a string to uppercase
//  Input        : "Marvellous Multi OS"
//  Output       : MARVELLOUS MULTI OS
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void struprx(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
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

    struprx(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}
