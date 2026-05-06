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
        students[*student_count].grade_count = 0;

        while (fscanf(myFile, "%s %d",
                      students[*student_count].grades[students[*student_count].grade_count].assignment_name,
                      &students[*student_count].grades[students[*student_count].grade_count].grade) == 2)
        {
            students[*student_count].grade_count++;
        }

        (*student_count)++;
    }

    fclose(myFile);
}

