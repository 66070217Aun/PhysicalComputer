#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    scanf("%lf\n%lf", &a, &b);

    printf("%.2lf", sqrt(pow(a, 2) + pow(b, 2)));

    return 0;
}