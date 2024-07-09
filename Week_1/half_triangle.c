#include <stdio.h>

void same_line(int number) {
    for (int i = 0; i < number; i++) {
        printf("*");
    }
    printf("\n");
}

int main() {
    int number;
    scanf("%d", &number);

    for (int i = 0; i < number; i++) {
        same_line(i+1);
    }

    return 0;
}