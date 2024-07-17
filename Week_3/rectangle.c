#include <stdio.h>

int main() {
    double width, height;
    scanf("%lf\n%lf", &width, &height);

    printf("Perimeter of rectangle = %.4lf units", 2*(width + height));

    return 0;
}