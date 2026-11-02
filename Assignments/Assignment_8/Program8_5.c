#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: TableRev
//  Description  : Displays the multiplication table of a number in reverse order
//  Input        : 2
//  Output       : 20 18 16 14 12 10 8 6 4 2
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void TableRev(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d \t ", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    TableRev(iValue);
    
    return EXIT_SUCCESS;
}
