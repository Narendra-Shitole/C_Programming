#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CountSmall
//  Description  : Program which accepts a string and counts small characters
//  Input        : "Marvellous"
//  Output       : 9
//  Date         : 20/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int CountSmall(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str >= 'a') && (*str <= 'z'))
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

    iRet = CountSmall(Arr);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}
