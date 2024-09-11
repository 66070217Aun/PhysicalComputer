#include <stdio.h>

int main() {
    char first[200], last[200];
    scanf("%s %s", first, last);

    printf("%c.%c.", first[0], last[0]);

    return 0;
}