#include <stdio.h>
#include <stdlib.h>

//////////////////////////////////////////////////////////
//
//  Function Name: DisplayGrade
//  Description  : Displays the student's grade based on marks obtained out of 100.
//  Input        : marks : 72
//  Output       : grade : c
//  Date         : 22/10/2026
//  Author       : Narendra Balasaheb Shitole 
//
//////////////////////////////////////////////////////////
void DisplayGrade(float fMarks)
{
    if (fMarks < 0.0f || fMarks > 100.0f)
    {
        printf("Invalid Marks\n");
    }
    else if (fMarks >= 90.0f && fMarks <= 100.0f)
    {
        printf("Grade A\n");
    }
    else if (fMarks >= 75.0f && fMarks <= 89.0f)
    {
        printf("Grade B\n");
    }
    else if (fMarks >= 60.0f && fMarks <= 74.0f)
    {
        printf("Grade C\n");
    }
    else if (fMarks >= 40.0f && fMarks <= 59.0f)
    {
        printf("Grade D\n");
    }
    else
    {
        printf("Fail\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks: ");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}
