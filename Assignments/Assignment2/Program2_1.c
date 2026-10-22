#include <stdio.h>
//////////////////////////////////////////////////////////
//
//  Function Name: Display
//  Description  : Accepts 1 numbers and print * on screen
//  Input        : 3
//  Output       : ***
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////


void Display(int iNo)
{
    int iCnt = 0;
    
    
    while(iCnt < iNo)
    {
        printf("* ");
        iCnt++; // Updater
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