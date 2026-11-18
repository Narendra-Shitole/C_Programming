#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Pattern
//  Description  : Displays sequential numbers continuously from 1 up to (iRow * iCol)
//  Input        : iRow = 3, iCol = 4
//  Output       : Numbers 1 through 12 arranged in a 3x4 grid
//  Date         : 18/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo = 1;

    for(i = 1; i <= iRow ; i++)
    {
        
        for(j = 1 ; j <= iCol ; j++  )
        {
            printf("%d\t",iNo);
            iNo++;
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
