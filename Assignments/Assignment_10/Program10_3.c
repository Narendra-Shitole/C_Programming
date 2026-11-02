#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: KMtoMeter
//  Description  : accepts distance in kilometer and converts it into meter
//  Input        : Integer
//  Output       : Integer
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole
//
//////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    return iNo * 1000;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance : \n");
    scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is : %d\n",iRet);

    return EXIT_SUCCESS;
}