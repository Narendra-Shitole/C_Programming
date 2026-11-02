#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name: CircleArea
//  Description  : accepts radius of circle and calculate area
//  Input        : Float
//  Output       : Double
//  Date         : 02/11/2026
//  Author       : Narendra Balasaheb Shitole
//
//////////////////////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    float PI = 3.14f;
    double dResult = 0.0;

    dResult = PI * fRadius * fRadius;
    
    return dResult;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %.4lf\n",dRet);

    return EXIT_SUCCESS;
}