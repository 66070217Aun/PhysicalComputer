#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct Book {
    char id[10];
    char name[100];
    char author[100];
}Book;

int main() {
    bool founded = false;
    int size, find;
    char want[10];
    scanf("%d\n%s", &size, want);

    Book* array = (Book*) malloc(sizeof(Book) * size);
    for (int i = 0; i < size; i++) {
        scanf("%s %s %s", (array+i)->id, (array+i)->name, (array+i)->author);
        if (!strcmp((array+i)->id, want)) {
            find = i;
            founded = true;
        }
    }

    if (founded) {
        printf("%s %s %s", (array+find)->id, (array+find)->name, (array+find)->author);
    } else {
        printf("Not Found");
    }

    free(array);
    return 0;
}