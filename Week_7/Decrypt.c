#include <stdio.h>
#include <string.h>

int main() {
    char word[201];
    scanf("%[^\n]", word);

    char gambling[] = {'Z', 'P', 'U', 'H', 'T', 'K', 'L', 'F', 'C', 'E', 'D', 'V', 'G', 'W', 'A', 'Y', 'M', 'N', 'B', 'Q', 'R', 'J', 'S', 'O', 'I', 'X'};

    for (int i = 0; i < strlen(word); i++) {
        if (word[i] > 96) {
            word[i] = gambling[word[i] % 26] + 32;
        } else if (word[i] == ' ') {
            word[i] = ' ';
        } else {
            word[i] = gambling[(word[i] + 32) % 26];
        }
        printf("%c", word[i]);
    }

    return 0;
}