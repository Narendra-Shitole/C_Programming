#include <stdio.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayFactor
//  Description  : Accepts a number and prints its factors
//  Input        : 24
//  Output       : 1 2 4 6 8 12
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
    int i = 0;
    
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    
    for(i = 1; i <= iNo / 2; i++)
    {
        if((iNo % i) == 0)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main()
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d", &iValue);
    
    DisplayFactor(iValue);
    
    return 0;
}
