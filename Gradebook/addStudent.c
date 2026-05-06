//Will add student to list
#include <stdio.h>
#include <string.h>
#include "student.h"
#include "addStudent.h"

void addStudent(Student students[], int* student_count)
{
    if (*student_count >= STUDENT_LIMIT)
    {
        printf("Max capacity!\n");
        return;
    }

    int countTrack = *student_count;

    printf("Enter student ID: ");
    scanf("%d", &students[countTrack].id);

    while (getchar() != '\n');

    printf("Enter student name: ");
    fgets(students[countTrack].student_name, NAME_LIMIT, stdin);

    students[countTrack].student_name[
        strcspn(students[countTrack].student_name, "\n")
    ] = '\0';

    students[countTrack].grade_count = 0;

    (*student_count)++;

    printf("Student added!\n");
}