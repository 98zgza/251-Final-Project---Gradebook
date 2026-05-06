
#ifndef STUDENT_H
#define STUDENT_H

#define NAME_LIMIT 30
#define GRADE_LIMIT 10
#define STUDENT_LIMIT 30
#define GRADE_MIN 0
#define GRADE_MAX 100
#define MENU_TOTAL_OPTIONS 12


typedef struct
{
    char assignment_name[NAME_LIMIT];
    int grade;
}Grade;

typedef struct
{
    int id;
    char student_name[NAME_LIMIT];
    Grade grades[GRADE_LIMIT];
    int grade_count;

}Student;

#endif
