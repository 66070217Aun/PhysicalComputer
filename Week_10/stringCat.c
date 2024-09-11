#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

int main() {
    char word[2000];
    scanf("%[^\n]", word);

    bool check = true;
    for (int i = 0; i < strlen(word); i++) {
        if (tolower(word[i]) == 'c' && tolower(word[i+1]) == 'a' && tolower(word[i+2]) == 't') {
            if (check) {
                printf("%d", i);
                check = false;
            } else {
                printf(", %d", i);
            }
        }
    }

    return 0;
}