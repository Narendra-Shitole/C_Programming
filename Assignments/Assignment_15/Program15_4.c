#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Multiply
//  Description  : Multiplies three numbers, skipping any zeros present
//  Input        : 5  0  7
//  Output       : 35
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iAns = 1;
    int iZeroCount = 0;
    
    if(iNo1 != 0) { iAns = iAns * iNo1; } else { iZeroCount++; }
    if(iNo2 != 0) { iAns = iAns * iNo2; } else { iZeroCount++; }
    if(iNo3 != 0) { iAns = iAns * iNo3; } else { iZeroCount++; }
    
    if(iZeroCount == 3)
    {
        return 0;
    }
    
    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
    
    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);
    
    iRet = Multiply(iValue1, iValue2, iValue3);
    
    printf("%d\n", iRet);
    
    return EXIT_SUCCESS;
}
