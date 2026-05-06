// Uses a for loop from 0 to grade and ouputs assignment name and grade.//
#include <stdio.h>
#include "student.h"
#include "listGrades.h"

void listGrade(Student* s)
{
    printf("=======================================\n");
    for (int i = 0; i < s->grade_count; i++)
    {
        printf("Assignment %d\tGrade: %d\n", i + 1, s->grades[i].grade);
    }
    printf("=======================================\n");
} // End of void listGrade(Student *s)
