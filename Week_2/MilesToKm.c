#include <stdio.h>

int main() {
    double number;
    scanf("%lf", &number);

    printf("%.2lf", number * 1.60934);

    return 0;
}