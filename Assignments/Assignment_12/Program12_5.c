#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Count
//  Description  : Counts how many digits in the number are strictly less than 6
//  Input        : 2395
//  Output       : 3  (Digits: 2, 3, 5)
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int Count(int iNo)
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
        if(iDigit < 6)
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
    
    iRet = Count(iValue);
    
    printf("%d\n", iRet);
    
    return EXIT_SUCCESS;
}
