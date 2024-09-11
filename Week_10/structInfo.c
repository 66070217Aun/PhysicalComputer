#include <stdio.h>
#include <string.h>

typedef struct student_info {
    char name[60];
    char surname[60];
    char sex[7];
    int age;
    char id[12];
    double gpa;
} student_info;

int main() {
    student_info student;
    scanf("%s %s %s %d %s %lf", student.name, student.surname, student.sex, &student.age, student.id, &student.gpa);
    printf("%s %c %s (%d) ID: %s GPA %.2lf", (!strcmp(student.sex, "Male")) ? "Mr" : "Miss", student.name[0], student.surname, student.age, student.id, student.gpa);

    return 0;
}