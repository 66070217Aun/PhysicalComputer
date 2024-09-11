#include <stdio.h>
#include <string.h>

int main() {
    int character = 0, word = 0, line = 0; 

    char array[451];
    while (1) {
        scanf("\n%[^\n]", array);
        if (array[0] == '.') break;

        for (int i = 0; i < strlen(array); i++) {
            if (array[i] == ' ') {
                word++;
            } else {
                character++;
            }
        }
        word++;
        line++;
    }
    printf("Char = %d, word = %d, line = %d", character, word, line);

    return 0;
}