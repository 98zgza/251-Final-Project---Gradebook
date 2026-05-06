#include <stdio.h>
#include "student.h"
#include "addStudent.h"
#include "findStudent.h"
#include "updateStudent.h"
#include "Grade Functions/addGrade.h"
#include "Grade Functions/editGrade.h"
#include "Grade Functions/deleteGrade.h"
#include "Grade Functions/listGrades.h"
#include "validateInput.h"
#include "sort.h"

int main(void)
{
    Student students[STUDENT_LIMIT];
    int student_count = 0;
    int menuChoice;
    int studentIndex;

    do
    {
        printf("\n===== Gradebook Menu =====\n");
        printf("1. Add Student\n");
        printf("2. Find Student\n");
        printf("3. Update Student\n");
        printf("4. Add Grade\n");
        printf("5. Edit Grade\n");
        printf("6. Delete Grade\n");
        printf("7. List Grades\n");
        printf("8. Sort Students by ID\n");
        printf("9. Exit\n");
        printf("Select an option: ");

        menuChoice = validMenuSelection();

        switch (menuChoice)
        {
            case 1:
                addStudent(students, &student_count);
                break;

            case 2:
                studentIndex = findStudent(students, student_count);

                if (studentIndex != -1)
                {
                    printf("Student index: %d\n", studentIndex);
                }

                break;

            case 3:
                updateStudent(students, student_count);
                break;

            case 4:
                studentIndex = findStudent(students, student_count);

                if (studentIndex != -1)
                {
                    addGrade(&students[studentIndex]);
                }

                break;

            case 5:
                studentIndex = findStudent(students, student_count);

                if (studentIndex != -1)
                {
                    editGrade(&students[studentIndex]);
                }

                break;

            case 6:
                studentIndex = findStudent(students, student_count);

                if (studentIndex != -1)
                {
                    deleteGrade(&students[studentIndex]);
                }

                break;

            case 7:
                studentIndex = findStudent(students, student_count);

                if (studentIndex != -1)
                {
                    listGrade(&students[studentIndex]);
                }

                break;

            case 8:
                if (student_count == 0)
                {
                    printf("No students to sort.\n");
                }
                else
                {
                    sortById(students, student_count);
                    printf("Students sorted by ID.\n");
                }

                break;

            case 9:
                printf("Exiting gradebook.\n");
                break;

            default:
                printf("Invalid menu option.\n");
                break;
        }

    } while (menuChoice != 9);

    return 0;
}