#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for(int i=number; i > 0; i--) {
        printf("%d ", i);
    }

    return 0;
}