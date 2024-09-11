#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Record {
    char id[10];
    char name[100];
    long salary;
    long sales;
}Record;

int main() {
    int number;
    scanf("%d", &number);

    Record* array = (Record*) malloc(sizeof(Record) * number);

    for (int i = 0; i < number; i++) {
        scanf("\n%s %s %ld %ld", (array+i)->id, (array+i)->name, &(array+i)->salary, &(array+i)->sales);
    }

    char want[10];
    scanf("\n%s", want);
    bool check = true;
    for (int i = 0; i < number; i++) {
        if (!strcmp((array+i)->id, want)){
            printf("%s\n%s\n%ld\n%.2lf\n%ld\n%.2lf", (array+i)->id, (array+i)->name, (array+i)->sales, (array+i)->sales*0.02, (array+i)->salary, (array+i)->salary + ((array+i)->sales * 0.02));
            check = false;
        }
    }
    if (check) {
        printf("ID not found !!!");
    }

    free(array);

    return 0;
}