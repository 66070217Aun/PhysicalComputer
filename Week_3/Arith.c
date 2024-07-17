#include <stdio.h>

int main() {
    double first, second;
    scanf("%lf,%lf", &first, &second);

    printf("The sum of the given numbers : %lf\nThe difference of the given numbers : %lf\nThe product of the given numbers : %lf\nThe quotient of the given numbers : %lf", first+second, first-second, first * second, first/second);

    return 0;
}