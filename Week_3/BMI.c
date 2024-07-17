#include <stdio.h>

int main() {
    float height, weight;
    scanf("%f\n%f", &height, &weight);

    printf("%f", weight / ((height/100)*(height/100)));
}