#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountEven
//  Description  : Returns the count of even digits in a given number
//  Input        : 1018
//  Output       : 2
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        return 1;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
