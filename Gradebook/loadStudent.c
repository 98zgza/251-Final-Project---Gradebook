#include <stdio.h>
#include "loadStudents.h"

void loadStudents(Student students[], int *student_count)
{
    FILE *myFile = fopen("Gradebook.txt", "r");

    if (myFile == NULL)
    {
        return;
    }

    *student_count = 0;

    while (fscanf(myFile, " Name:%s id:%d",
                  students[*student_count].student_name,
                  &students[*student_count].id) == 2)
    {
        fscanf(myFile, " Grades:%d",
               &students[*student_count].grade_count);

        for (int j = 0; j < students[*student_count].grade_count; j++)
        {
            fscanf(myFile, "%d",
                   &students[*student_count].grades[j].grade);

            snprintf(students[*student_count].grades[j].assignment_name,
                     NAME_LIMIT,
                     "Assignment %d",
                     j + 1);
        }

        (*student_count)++;
    }

    fclose(myFile);
}