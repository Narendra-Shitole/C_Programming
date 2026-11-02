#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Number
//  Description  : Classifies a number as small, medium, or large
//  Input        : 109
//  Output       : large
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("small\n");
    }
    else if(iNo >= 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else if(iNo >= 100)
    {
        printf("large\n");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number: ");
    scanf("%d", &iValue);
    
    Number(iValue);
    
    return EXIT_SUCCESS;
}
