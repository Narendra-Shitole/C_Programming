#include<stdio.h>
//////////////////////////////////////////////////////////
//
//  Function Name: Accept
//  Description  : Accepts 1 numbers and print * on screen
//  Input        : 4
//  Output       : ****
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////


void Accept(int iNo)
{

    int iCnt = 0;

    for( iCnt = 1;iCnt <= iNo;iCnt++)

{

printf("*");

}

}

int main() {

int iValue = 0;

printf("Enter the number of stars:\n");
scanf("%d ",&iValue);

Accept(iValue);

return 0;

}