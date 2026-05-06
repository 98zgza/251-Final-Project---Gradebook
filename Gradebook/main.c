#include <stdio.h>
#include "student.h"
#include "addStudent.h"
#include "updateStudent.h"


int main(void){
    Student students[STUDENT_LIMIT];
    int student_count = 0;
    addStudent(students,&student_count);
    printf("Student added: %s\n",students[0].student_name);
    return 0;
} //body to addstudent
