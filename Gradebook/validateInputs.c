// Check refs at student.h. These apply to all 3 validate functions//
// Ensures value entered is an integer and within grade limits.//
// I utilized code I found in a stack overflow forum to accomplish this.//
#include <stdio.h>
#include "student.h"
#include "validateInput.h"

int validateGradeInput() // Ref[1]/Ref[2]
{
    // While loop with val are my ideas. Using scanf%d != 1 to check if valid int is from
    // stack overflow discussion post. Ref 1
    int uInput;
    printf("Enter an integer grade %d - %d: ", GRADE_MIN, GRADE_MAX);
    while (scanf("%d", &uInput) != 1 || uInput < GRADE_MIN || uInput > GRADE_MAX)
    {
        printf("\n");
        printf("Invalid input. Enter an integer from %d - %d: ", GRADE_MIN, GRADE_MAX);
        while (getchar() != '\n'); // Clear input buffer. Otherwise will get infinite loop when invalid input. 
        // Also from stack overflow Ref 2

    }

    while (getchar() != '\n');

    return uInput;
}

//===============================================================================================================
int validateStudentSelection() //Ref[1] / Ref[2]
{
    int uInput = 0;
    printf("Select a student by integer to manage their gradebook: ");
    while (scanf("%d", &uInput) != 1 || uInput < 0 || uInput >= STUDENT_LIMIT)
    {
        printf("\n");
        printf("Invalid input. Select an integer from 0 - %d: ", STUDENT_LIMIT - 1);
        while (getchar() != '\n'); // Clear input buffer. Otherwise will get infinite loop when invalid input. 
        // Also from stack overflow
    }

    while (getchar() != '\n');

    return uInput;
}
//====================================================================================================================
int validMenuSelection()
{
    int uInput;
    while (scanf("%d", &uInput) != 1 || uInput < 1 || uInput > MENU_TOTAL_OPTIONS)
    {
        printf("\n");
        printf("Invalid input. Select 1 - %d\n", MENU_TOTAL_OPTIONS);
        while (getchar() != '\n'); 

    }

    while (getchar() != '\n');

    return uInput;
} //Ref[1] / Ref[2]


// Reference 1: https://stackoverflow.com/questions/4072190/check-if-input-is-integer-type-in-c
// Reference 2:  https://stackoverflow.com/questions/27273303/alternate-method-for-clearing-input-buffer-in-c/27273595#27273595