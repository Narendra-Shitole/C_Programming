#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: SquareMeter
//  Description  : accepts area in square feet and converts it into square meter
//  Input        : Integer
//  Output       : Double
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole
//
//////////////////////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    double dResult = 0.0;

    dResult = iNo * 0.092903;

    return dResult;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in square feet : \n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Area in Square Meter is : %lf\n",dRet);

    return EXIT_SUCCESS;
}