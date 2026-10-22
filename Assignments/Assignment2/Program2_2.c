#include <stdio.h>
//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accepts 1 numbers and print * on screen
//  Input        : 2
//  Output       : **
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Display(int iNo)
{
    
    while(iNo > 0)
    {
        printf("* ");
        iNo--; 
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