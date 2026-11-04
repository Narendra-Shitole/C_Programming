#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Percentage
//  Description  : Calculates marks percentage with division-by-zero protection
//  Input        : 1000  745
//  Output       : 74.5%
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////

float Percentage(int iTotal, int iObtained)
{
    if(iTotal == 0)
    {
        return 0.0f;
    }
    
    return ((float)iObtained / (float)iTotal) * 100.0f;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;
    
    printf("Please enter total marks: ");
    scanf("%d", &iValue1);
    
    printf("Please enter obtained marks: ");
    scanf("%d", &iValue2);
    
    fRet = Percentage(iValue1, iValue2);
    
    printf("%.1f%%\n", fRet);
    
    return EXIT_SUCCESS;
}
