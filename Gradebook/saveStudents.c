#include <stdio.h>
#include "saveStudents.h"

void saveStudents(Student students[], int student_count)
{

FILE *myFile = fopen("Gradebook.txt", "w");

if (myFile == NULL)
{
        printf("No file to write to\n");
        return;
}

for (int i = 0; i < student_count; i++)
{
        fprintf(myFile, "\n");
        fprintf(myFile, "Name:%s\t id:%d\n", students[i].student_name, students[i].id);
        fprintf(myFile, "Grades:%d\n", students[i].grade_count);
        for (int j = 0; j < students[i].grade_count;j++)
        {
               fprintf(myFile, "%d\n", students[i].grades[j].grade);
        }

        fprintf(myFile, "\n");
}
fclose(myFile);
printf("Student info saved to gradebook");
}







