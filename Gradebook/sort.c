//sort function//
#include "sort.h"

void sortById(Student students[], int count) {

  int i;
  int j;

for (i = 0; i < count - 1; i++) {

    for (j = 0; j < count - 1; j++) {

      if (students[j].id > students[j + 1].id) {

          Student temp;

          temp = students[j];
          students[j] = students[j + 1];
          students[j + 1] = temp;
      }
    }
  }
}
