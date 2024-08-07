#include <stdio.h>

int main() {
    char word[101], storage[101];
    scanf("%[^\n]", word);      

    int i = 0;
    while (word[i] != '\0') {
        storage[100-i] = word[i];

        i-=-1;
    }

    for (int j = 101 - i; j < 101; j++) {
        printf("%c", storage[j]);
    }

    return 0;
}