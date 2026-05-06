#include <stdio.h>
#include <string.h>
#include "student.h"
#include "updateStudent.h"

void updateStudent(Student students[], int student_count)
{
    char searchName[NAME_LIMIT];
    char newName[NAME_LIMIT];
    int studentIndex = -1;

    if (student_count == 0)
    {
        printf("No students have been added yet.\n");
        return;
    }

    printf("Enter student name to update: ");
    fgets(searchName, NAME_LIMIT, stdin);

    searchName[strcspn(searchName, "\n")] = '\0';

    // Finds student
    for (int i = 0; i < student_count; i++)
    {
        if (strcmp(students[i].student_name, searchName) == 0)
        {
            studentIndex = i;
            break;
        }
    }

    if (studentIndex == -1)
    {
        printf("Student not found.\n");
        return;
    }

    printf("Enter new student name: ");
    fgets(newName, NAME_LIMIT, stdin);

    newName[strcspn(newName, "\n")] = '\0';

    strcpy(students[studentIndex].student_name, newName);

    printf("Student updated successfully!\n");
}