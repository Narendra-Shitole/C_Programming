#include<stdio.h>
//////////////////////////////////////////////////////////
//
//  Function Name: Check
//  Description  : Accepts 1 number and check if divisible by 5 or not
//  Input        : 5 or 3
//  Output       : divisible or not divisible
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////


typedef int bool;
#define TRUE 1
#define FALSE 0

bool Check( int iNo)
{
    if((iNo % 5) == 0)
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
    bool bRet = FALSE;

    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = Check(iValue);

if(bRet == TRUE) 
{
    printf("Divisible by 5\n");
}
else
{
    printf("Not Divisible by 5\n");
}

return 0;
}