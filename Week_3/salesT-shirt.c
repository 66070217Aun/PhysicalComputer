#include <stdio.h>

int main() {
    double price, percent, amount;
    scanf("%lf\n%lf\n%lf", &price, &percent, &amount);

    printf("%.2lf", (price*(1-(percent/100)))*amount);
}