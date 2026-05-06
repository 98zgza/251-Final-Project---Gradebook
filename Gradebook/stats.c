#include <stdio.h>
#include "student.h"
#include "stats.h"

void showStats(Student students[], int student_count)
{
    if (student_count == 0)
    {
        printf("No students available.\n");
        return;
    }

    int totalGrades = 0;
    int sum = 0;
    int highest = -1;
    int lowest = 101;

    for (int i = 0; i < student_count; i++)
    {
        for (int j = 0; j < students[i].grade_count; j++)
        {
            int g = students[i].grades[j].grade;

            sum += g;
            totalGrades++;

            if (g > highest)
                highest = g;

            if (g < lowest)
                lowest = g;
        }
    }

    printf("Total Students: %d\n", student_count);
    printf("Total Grades: %d\n", totalGrades);

    if (totalGrades > 0)
    {
        double average = (double)sum / totalGrades;
        printf("Class Average: %.2f\n", average);
        printf("Highest Grade: %d\n", highest);
        printf("Lowest Grade: %d\n", lowest);
    }
    else
    {
        printf("No grades available.\n");
    }
}