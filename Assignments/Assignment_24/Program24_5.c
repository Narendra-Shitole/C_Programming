#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: StrRevX
//  Description  : Reverses the given string in place using two pointers
//  Input        : "abcd"
//  Output       : "dcba"
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void StrRevX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    if(str == NULL)
    {
        return;
    }

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char arr[50] = {'\0'};

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    StrRevX(arr);

    printf("Modified string is %s\n", arr);

    return EXIT_SUCCESS;
}
