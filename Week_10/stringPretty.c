#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    int number;
    char word1[51], word2[41];

    scanf("%d\n%[^\n]\n%[^\n]", &number, word1, word2);
    for (int i = 0; i < number; i++) {
        printf("*");
    }
    printf("\n");
    
    int front = ceil((number - strlen(word1)) / 2.0);
    printf("*");
    for(int i = 0; i < front-1; i++) {
        printf(" ");
    }
    printf("%s", word1);

    for (int i = 0; i < (number - strlen(word1)) - front - 1; i++) {
        printf(" ");
    }
    printf("*\n");

    front = ceil((number - strlen(word2)) / 2.0);
    printf("*");
    for(int i = 0; i < front - 1; i++) {
        printf(" ");
    }
    printf("%s", word2);

    for(int i = 0; i < (number - strlen(word2)) - front - 1; i++) {
        printf(" ");
    }
    printf("*\n");

    for (int i = 0; i < number; i++) {
        printf("*");
    }

    return 0;
}