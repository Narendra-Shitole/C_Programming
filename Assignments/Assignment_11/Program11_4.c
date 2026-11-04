#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: RangeSumEven
//  Description  : Returns the addition of all even numbers within a positive range
//  Input        : 23  30
//  Output       : 108
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int RangeSumEven(int iStart, int iEnd)
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
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }
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
    
    iRet = RangeSumEven(iValue1, iValue2);
    
    printf("Addition is %d\n", iRet);
    
    return EXIT_SUCCESS;
}
