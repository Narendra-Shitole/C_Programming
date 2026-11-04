#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: MultDigits
//  Description  : Returns the multiplication product of all non-zero digits
//  Input        : 9440
//  Output       : 144
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int MultDigits(int iNo)
{
    int iDigit = 0;
    int iMul = 1;
    int iHasNonZero = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 0;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit != 0)
        {
            iMul = iMul * iDigit;
            iHasNonZero = 1;
        }
        iNo = iNo / 10;
    }

    return iHasNonZero ? iMul : 0;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
