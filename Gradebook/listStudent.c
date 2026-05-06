#include <stdio.h>
#include "student.h"
#include "listStudent.h"

void listStudents(Student students[], int student_count)
{
    if (student_count == 0)
{
      printf("No students available.\n");
      return;
}

for (int i = 0; i < student_count; i++)
{
      printf("Student %d:\n", i + 1);
      printf("Nmae: %s\n", students[i].student_name);
      printf("Grades: %d\n", students{i}.grade_count);
      printf("\n");
  }
}
