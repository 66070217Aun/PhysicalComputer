#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char word[100], tmp[100] = {0};
    scanf("%[^\n]", word);
    int size = strlen(word);

    bool change = true;
    char* ptr = &word[0];
    int count = 0;
    while (change) {
        change = false;
        count = 0;
        for (int i = 0; i < size; i++) {
            if (word[i] == word[i+1]) {
                i++;
                change = true;
            } else {
                tmp[count++] = word[i];
            }
        }
        tmp[count] = '\0';
        strcpy(word, tmp);
        if (change) {
           printf("%s\n", word);
        }
        size = strlen(word);
    }

    return 0;
}