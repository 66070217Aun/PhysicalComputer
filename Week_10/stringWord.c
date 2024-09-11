#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char sentense[151];
    scanf("%[^\n]", sentense);

    int count = 0;
    char* ptr = sentense;
    while(*ptr){
        if (*ptr == ' ') {
            count++;
        }
        ptr++;
    }
    count++;
    printf("%d words\n----\n", count);

    count = 0;
    ptr = sentense;
    while(*ptr) {
        if (*ptr == ' ') {
            printf(" : %d\n", count);
            count = 0;
        } else {
            printf("%c", tolower(*ptr));
            count++;
        }
        ptr++;
    }
    printf(" : %d", count);

    return 0;
}