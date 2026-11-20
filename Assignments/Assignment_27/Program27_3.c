#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: Difference
//  Description  : Returns difference between frequency of small and capital characters
//  Input        : "MarvellouS"
//  Output       : 6
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int Difference(char *str)
{
    int iSmall = 0, iCapital = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }
        str++;
    }
    return (iSmall - iCapital);
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s", Arr);

    iRet = Difference(Arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
