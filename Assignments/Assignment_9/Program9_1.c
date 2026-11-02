#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Prints N number of * followed by N number of #
//  Input        : 5
//  Output       : * * * * * # # # # #
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Display(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* \t ");
    }
    
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# \t ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Display(iValue);
    
    return EXIT_SUCCESS;
}
