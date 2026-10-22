#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: CheckAdmission
//  Description  : Determines admission eligibility based on marks and age criteria.
//  Input        : 65 and marks 18
//  Output       : eligible
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void CheckAdmission(float fMarks, int iAge)
{
    if (iAge < 0 || fMarks < 0.0f || fMarks > 100.0f)
    {
        printf("Invalid Input\n");
        return;
    }

    if (fMarks >= 60.0f && iAge >= 17)
    {
        printf("Eligible for Admission\n");
    }
    else
    {
        printf("Not Eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}
