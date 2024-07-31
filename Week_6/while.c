#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    int i = 1;
    while (i <= number) {
        printf("%d ", i);
        i++;
    }

    return 0;
}