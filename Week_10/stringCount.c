#include <stdio.h>
#include <ctype.h>

int main() {
    char check, word[150];
    int count = 0;
    scanf("%c\n%[^\n]", &check, word);

    char* ptr = word;
    while (*ptr != '\0') {
        if (*ptr == tolower(check) || *ptr == toupper(check)) {
            count -=- 1;
        }
        ptr++;
    }

    printf("%d", count);
    return 0;
}