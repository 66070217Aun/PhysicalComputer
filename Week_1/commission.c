#include <stdio.h>

int main() {
    int count;
    scanf("%d", &count);

    if (count < 15) {
        printf("%d", count * 240);
    } else if (count == 15) {
        printf("%d", count * 360);
    } else if (count > 15) {
        printf("%d", count * 480);
    }

    return 0;
}