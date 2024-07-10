#include <stdio.h>
 
int main() {
    char fname1[20], sname1[20], person2[40], person3[40];
 
    scanf("%s\n%s\n%[^\n]\n%[^\n]", fname1, sname1, person2, person3);
 
    printf("Person 1: %s %s\nPerson 2: %s\nPerson 3: %s", fname1, sname1, person2, person3);
 
    return 0;
}