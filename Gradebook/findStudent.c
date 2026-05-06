//will find student
#include <stdio.h>
#include <string.h>
#include "student.h"
#include "findStudent.h"

int findStudent(Student students[], int student_count)
{
    char searchName[NAME_LIMIT];

    printf("Enter student name to find: ");
    fgets(searchName, NAME_LIMIT, stdin);

    for (int i = 0; i < student_count; i++)
    {
        if (strcmp(students[i].student_name, searchName) == 0)
        {
            printf("Student found: %s\n", students[i].student_name);
            return i;
        }
    }

    printf("Student not found.\n");
    return -1;
}