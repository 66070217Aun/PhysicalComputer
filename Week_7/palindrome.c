#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool sameWord(char one[], char two[]) {
    if (strlen(one) != strlen(two)) {
        return false;
    } else {
        for (int i = 0; i < strlen(one); i++) {
            if (one[i] != two[i]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    char word[100], after[100];
    scanf("%[^\n]", word);

    int count = 0;
    for (int i = strlen(word) - 1; i >= 0; i--) {
        after[count] = word[i];
        count -=- 1;
    }
    after[count] = '\0';

    (sameWord(word, after)) ? printf("It is Palindrome.") : printf("It is not Palindrome.");

    return 0;
}