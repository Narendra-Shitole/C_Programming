#include <stdio.h>
#include <stdlib.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////
//
//  Function Name: ChkGreater
//  Description  : Checks whether a number is greater than 100
//  Input        : 101
//  Output       : Greater
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////

BOOL ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Please enter number: ");
    scanf("%d", &iValue);
    
    bRet = ChkGreater(iValue);
    
    if(bRet == TRUE)
    {
        printf("Greater\n");
    }
    else
    {
        printf("Smaller\n");
    }
    
    return EXIT_SUCCESS;
}
