#include <stdio.h>
#include <string.h>
#include "student.h"
#include "deleteStudent.h"

void deleteStudent(Student students[], int *student_count)
{
    char name[NAME_LIMIT];

    if (*student_count == 0)
    {
        printf("No students available.\n");
        return;
    }

    printf("Enter student name to delete: ");
    fgets(name, NAME_LIMIT, stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < *student_count; i++)
    {
        if (strcmp(students[i].student_name, name) == 0)
        {
            for (int j = i; j < *student_count - 1; j++)
            {
                students[j] = students[j + 1];
            }

            (*student_count)--;
            printf("Student deleted.\n");
            return;
        }
    }

    printf("Student not found.\n");
}