#include <stdio.h>
//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accepts one no. if no.< 10 then print hello otherwise print demo
//  Input        : 9
//  Output       : Hello
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Display(iValue);
    
    return 0;
}