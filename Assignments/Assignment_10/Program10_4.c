#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: FhtoCs
//  Description  : accept tempreture in fahrenheit and converts it into celsius
//  Input        : Float
//  Output       : Double
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole
//
//////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dResult = 0.0;

    dResult = (fTemp - 32) * 5 / 9;

    return dResult;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Tempreture in Fahrenheit : \n");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Tempreture in Celsius is : %.4lf\n",dRet);

    return EXIT_SUCCESS;
}