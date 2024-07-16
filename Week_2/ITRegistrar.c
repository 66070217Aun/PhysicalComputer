#include <stdio.h>
 
int main() {
    char f_name[30], l_name[30];
    int id, day, month, year;
    float gpa;
 
    scanf("%s\n%s\n%d\n%d/%d/%d\n%f", f_name, l_name, &id, &day, &month, &year, &gpa);
 
    printf("Fullname: %s %s\nID: %d\nDOB: %02d-%02d-%04d\nGPA: %.2f", f_name, l_name, id, day, month, year, gpa);
 
    return 0;
}