#include <stdio.h>
//////////////////////////////////////////////////////////
//
//  Function Name: ChkEven
//  Description  : Accepts  no. check if even or odd 
//  Input        : 2
//  Output       : even
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    
    if((iNo % 2) == 0) 
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
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    bRet = ChkEven(iValue);
    

    if(bRet == TRUE)
    {
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
    
    return 0;
}