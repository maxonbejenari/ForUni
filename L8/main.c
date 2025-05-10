#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char name[1000];
    int grup;
    int grade;
} student;

int compareStudents(const void* a, const void *b) {
    student *studentA = (student *)a;
    student *studentB = (student *)b;
    return studentB->grade - studentA->grade;
}

int main() {
    student s1, s2;

    strcpy(s1.name, "Alex");
    s1.grade = 9;
    s1.grup = 1411;

    strcpy(s2.name, "Bob");
    s2.grade = 10;
    s2.grup = 1211;

    student students[] = {s1, s2};
    int size = sizeof(students) / sizeof(students[0]);

    qsort(students, size, sizeof(student), compareStudents);

    for (int i = 0; i < size; i++) {
        printf("Student %d - grade -> %d - name %s - grup %d\n", i + 1, students[i].grade, 
            students[i].name, students[i].grup);
    }

    return 0;
}