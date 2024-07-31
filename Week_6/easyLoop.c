#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for(int i = number; (number > 0) ? i >= 0: i <= 0; (number > 0) ? i-- : i++) {
        printf("%d ", i);
    }

    return 0;
}