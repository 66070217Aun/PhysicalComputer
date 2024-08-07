#include <stdio.h>
#include <string.h>

int main() {
    char word[201];
    scanf("%[^\n]", word);

    char gambling[] = {'K', 'F', 'C', 'M', 'N', 'X', 'Y', 'E', 'I', 'A', 'B', 'D', 'L', 'J', 'S', 'U', 'G', 'W', 'H', 'V', 'Z', 'P', 'R', 'Q', 'O', 'T'};

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