#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: FindGreater
//  Description  : Compares two numbers and prints which one is greater or if they are equal.
//  Input        : 5 17
//  Output       : 17 greater
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void FindGreater(int iFirst, int iSecond)
{
    if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else if(iSecond > iFirst)
    {
        printf("%d is Greater\n", iSecond);
    }
    else
    {
        printf("Both Numbers Are Equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers: ");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1, iValue2);

    return EXIT_SUCCESS;
}
