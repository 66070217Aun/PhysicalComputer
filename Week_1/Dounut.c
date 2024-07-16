#include <stdio.h>
#include <math.h>

int main() {
    
    int outside, inside;
    scanf("%d %d", &outside, &inside);

    float outside_radius = outside / 2.0;
    float inside_radius = inside / 2.0;

    printf("%.4f\n%.4f", (3.1416 * pow(outside_radius, 2)) - (3.1416 * pow(inside_radius, 2)), (2 * 3.1416 * outside_radius) + (2 * 3.1416 * inside_radius));

    return 0;
}
