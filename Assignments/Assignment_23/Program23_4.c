#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayDigit
//  Description  : Extracts and prints only numeric digit characters from a string
//  Input        : "marve89llous121"
//  Output       : 89121
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void DisplayDigit(char *str)
{
    if(str == NULL)
    {
        return;
    }

    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
    printf("\n");
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    DisplayDigit(arr);

    return EXIT_SUCCESS;
}
