#include <stdio.h>

int main() {
    double first, second, third, forth;
    scanf("%lf\n%lf\n%lf\n%lf", &first, &second, &third, &forth);

    printf("Summation is %.2lf\nAverage is %.3lf", first+second+third+forth, (first+second+third+forth)/4);
    
    return 0;
}