#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: main
//  Description  : Accepts a full name from the user and prints it
//  Input        : String
//  Output       : String
//  Date         : 04/11/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
int main()
{
    char Name[30];
    
    printf("Please enter full name: ");

    scanf("%[^\n]", Name);
    
    printf("Your name is %s\n", Name);
    
    return EXIT_SUCCESS;
}
