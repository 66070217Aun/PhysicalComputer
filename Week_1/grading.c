#include <stdio.h>

int main() {
    int score;
    scanf("%d", &score);

    if (score >= 80) {
        printf("A");
    } else if (score >= 70) {
        printf("B");
    } else if (score >=60) {
        printf("C");
    } else if (score >= 50) {
        printf("D");
    } else {
        printf("F");
    }
    return 0;
}