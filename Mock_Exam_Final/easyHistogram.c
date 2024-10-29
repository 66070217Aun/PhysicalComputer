#include <stdio.h>
#include <stdlib.h>

typedef struct alpha {
    char alphabet;
    int amount;
} alpha;

int main() {
    int count = 0;
    char get[200];
    scanf("%[^\n]", get);
    alpha* storage = (alpha*) malloc(sizeof(alpha) * 52);

    int i = 0;
    while (1) {
        char input = get[i];

        if (input == '\0') break;

        if (input != ' ') {
            if (count == 0) {
                storage->alphabet = input;
                storage->amount = 1;
                count++;
            } else {
                int check = 0;
                for (int i = 0; i < count; i++) {
                    if ((storage+i)->alphabet == input) {
                        (storage+i)->amount++;
                        check = 1;
                    }
                }

                if (!check) {
                    (storage+count)->alphabet = input;
                    (storage+count)->amount = 1;
                    count++;
                }
            }
        }
        i++;
    }

    for (int i = 0; i < count - 1; i++) {
        int min = i;
        for (int j = i+1; j < count; j++) {
            if ((storage+min)->alphabet < 'a') {
                if ((storage + min)->alphabet + 32 != (storage + j)->alphabet) {
                    if ((storage + j)->alphabet >= 'a') {
                        if ((storage + min)->alphabet + 32 > (storage + j)->alphabet) {
                            min = j;
                        }
                    } else {
                        if ((storage + min)->alphabet + 32 > (storage + j)->alphabet + 32) {
                            min = j;
                        } 
                    }
                } else {
                    min = j;
                }
            } else {
                if ((storage + j)->alphabet >= 'a') {
                    if ((storage + min)->alphabet > (storage + j)->alphabet) {
                        min = j;
                    }
                } else {
                    if ((storage + min)->alphabet > (storage + j)->alphabet + 32) {
                        min = j;
                    } 
                }
            }
        }

        alpha tmp = storage[i];
        storage[i] = storage[min];
        storage[min] = tmp;
    }

    for (int i = 0; i < count; i++) {
        printf("%c = %d\n", (storage + i)->alphabet, (storage + i)->amount);
    }

    free(storage);

    return 0;
}