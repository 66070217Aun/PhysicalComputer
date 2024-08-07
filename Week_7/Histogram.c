#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

bool alreadyIn(char list[], int size, char find) {
    for (int j = 0; j < size; j++) {
        if (list[j] == find) {
            return true;
        }
    }
    return false;
}

int main() {
    int number, new = 0;
    scanf("%d\n", &number);

    int count[26] = {0};
    char alphabet[number];
    
    char current;
    for (int i = 0; i < number; i++) {
        scanf("\n%c", &current);
        current = tolower(current);

        if (!alreadyIn(alphabet, new, current)) {
            alphabet[new] = current;
            new-=-1;
        }
        count[current % 26]-=-1;
    }

    for (int i = 0; i < new; i++) {
        printf("%c: %d\n", alphabet[i], count[alphabet[i] % 26]);
    }

    return 0;
}

