CC = gcc
CFLAGS = -Wall -Wextra

gradebook: main.c student.c addStudent.c findStudent.c listStudent.c sort.c
  $(CC) $(CFLAGS) main.c student.c addStudent.c findStudent.c listStudent.c sort.c -o gradebook 

clean:
    rm -f gradebook
