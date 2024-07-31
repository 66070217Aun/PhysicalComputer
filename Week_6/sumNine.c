#include <stdio.h>

int main() {
    int sum, tmp;
    sum = 0; tmp = 0;

    while (1) {
        scanf("%d", &tmp);
        if (tmp != -9) {
            sum += tmp;
        } else {
            break;
        }
    }

    printf("%d\n", sum);

    return 0;
}