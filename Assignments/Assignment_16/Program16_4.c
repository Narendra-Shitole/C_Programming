#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Displays descending row numbers repeated across columns
//  Input        : iRow = 4, iCol = 5
//  Output       : Rows of 4s, 3s, 2s, and 1s (5 times each)
//  Date         : 18/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = iRow; i >= 1 ; i--)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            printf("%d\t",i);
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
