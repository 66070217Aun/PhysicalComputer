#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main() {
    int number, new = 0;
    scanf("%d\n", &number);

    int count[26] = {0};
    char alphabet[26];
    
    char current;
    for (int i = 0; i < number; i++) {
        scanf("\n%c", &current);
        current = tolower(current);

        if (count[current % 26] <= 0) {
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

