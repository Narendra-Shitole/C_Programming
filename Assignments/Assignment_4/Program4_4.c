#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckVotingEligibility
//  Description  : Determines voting eligibility based on age and checks for invalid input.
//  Input        : 18
//  Output       : eligible
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age: ");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}
