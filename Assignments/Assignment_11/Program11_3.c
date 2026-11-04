#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: RangeSum
//  Description  : Returns the addition of all numbers within a positive range
//  Input        : 23  30
//  Output       : 212
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;
    
    if((iStart > iEnd) || (iStart < 0) || (iEnd < 0))
    {
        printf("Invalid range\n");
        exit(0); 
    }
    
    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;
    
    printf("Enter starting point: ");
    scanf("%d", &iValue1);
    
    printf("Enter ending point: ");
    scanf("%d", &iValue2);
    
    iRet = RangeSum(iValue1, iValue2);
    
    printf("Addition is %d\n", iRet);
    
    return EXIT_SUCCESS;
}
