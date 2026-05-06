#include <stdio.h>
#include <string.h>
#include "student.h"
#include "addStudent.h"

void addStudent(Student students[],int* student_count)
{
    if(*student_count >= STUDENT_LIMIT)
    {
        printf("Max capacity!\n");
        return;
    }
    int countTrack = *student_count;
    fgets(students[countTrack].student_name,NAME_LIMIT,stdin);
    //reads name

    students[countTrack].grade_count = 0;
    (*student_count)++;

    printf("student added!\n");
}