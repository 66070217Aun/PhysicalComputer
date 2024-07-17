#include <stdio.h>
#include <math.h>

int main() {
    double price, r, height, v;
    scanf("%lf\n%lf\n%lf", &price, &r, &height);

    v = height * 3.14159265359 * pow(r/2, 2);

    printf("Volume : %.2lfml\nBaht/ml : %.4lf", v, price/v);

    return 0;
}