#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Prints characters from input till Z if capital, or reverse till a if small
//  Input        : Q
//  Output       : Q R S T U V W X Y Z
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Display(char ch)
{
    char cCnt = '\0';

    if((ch >= 'A') && (ch <= 'Z'))
    {
        for(cCnt = ch; cCnt <= 'Z'; cCnt++)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        for(cCnt = ch; cCnt >= 'a'; cCnt--)
        {
            printf("%c\t", cCnt);
        }
        printf("\n");
    }
    else
    {
        return;
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}
