//student header//
#ifndef STUDENT_H
#define STUDENT_H

#define NAME_LIMIT 30
#define GRADE_LIMIT 10
#define STUDENT_LIMIT 30

typedef struct
{
    char assignment_name[NAME_LIMIT];
    int grade;
}Grade;

typedef struct
{
    char student_name[NAME_LIMIT];
    Grade grades[GRADE_LIMIT];
    int grade_count;

}Student;

#endif
