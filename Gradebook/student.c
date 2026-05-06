//student function//
#include <stdio.h>
#include <string.h>
#include "student.h"

void initializeStudent(Student* s,const char name[])
{
    strncpy(s->student_name,name,NAME_LIMIT -1);
    s->student_name[NAME_LIMIT-1] = '\0';
    s->grade_count = 0;
}
