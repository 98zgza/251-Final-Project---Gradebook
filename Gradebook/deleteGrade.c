// Checks if gradebook is empty and returns if so.
// Prompt user to select assignment number(integer val) to delete and checks if valid number.
// Deletes grade by overwrittin value at grade[uInput] with value grade[uInput + 1] and iterates til end of array.
// Decrements grade count and prints success message.
#include <stdio.h>
#include "student.h"
#include "deleteGrade.h"
#include "listGrades.h"


void deleteGrade(Student *s)
{
    int uInput;
    if (s->grade_count == 0)
    {
        printf("Empty gradebook.");
        return;
    }

	printf("Select assignment number to delete: \n");
    listGrade(s);
    printf("Enter assignment number: ");

    while (scanf("%d", &uInput) != 1 || uInput < 0 || uInput >= s->grade_count)
    {
        
        printf("Invalid input. Select an integer from 0 - %d: ", s->grade_count - 1);
        while (getchar() != '\n'); {

        }// Clear input buffer. Otherwise will get infinite loop when invalid input. 
        // Also from stack overflow
    }

    while (getchar() != '\n')
    {
        // Clear input buffer after valid input
    }

    for (int i = uInput; i < s->grade_count - 1; i++)
    {
        s->grades[i] = s->grades[i + 1];
    }
    s->grade_count--;
    printf("Success. Grade deleted!\n");

}
