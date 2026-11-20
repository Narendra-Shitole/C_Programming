#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Reverse
//  Description  : Accepts string from user and displays it in reverse order
//  Input        : "MarvellouS"
//  Output       : SuollevraM
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Reverse(char *str)
{
    char *start = str;

    while (*str != '\0')
    {
        str++;
    }
    str--;

    while (str >= start)
    {
        printf("%c", *str);
        str--;
    }
    printf("\n");
}

int main()
{
    char Arr[50];

    printf("Enter String : \n");
    scanf("%[^\n]s", Arr);

    Reverse(Arr);

    return EXIT_SUCCESS;
}
