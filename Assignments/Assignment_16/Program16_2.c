#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Displays uppercase letters on odd rows and lowercase on even rows
//  Input        : iRow = 4, iCol = 4
//  Output       : Alternate rows of A B C D and a b c d
//  Date         : 18/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char ch = '\0';

    for(i = 1 ; i <= iRow ; i++)
    {
        if((i % 2 ) != 0)
        {
            ch = 'A';
        } 
        else
        { 
            ch = 'a';
        }

        for(j = 1 ; j <= iCol ; j++ , ch++)
        {
            printf("%c\t",ch);
        }
        printf("\n\n");
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
