#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountCapital
//  Description  : Program which accepts a string and counts capital characters
//  Input        : "Marvellous Multi OS"
//  Output       : 4
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int CountCapital(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter String : \n");
    scanf("%[^\n]s", Arr);

    iRet = CountCapital(Arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
