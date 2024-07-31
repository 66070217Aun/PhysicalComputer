#include <stdio.h>

int main() {
    int sum_age;
    double sum_height, sum_weight;
    sum_age = 0; sum_height = 0; sum_weight = 0;

    int twenty_160, twenty_180_60, thirty_40, forty_85_200;
    twenty_160 = 0; twenty_180_60 = 0; thirty_40 = 0; forty_85_200 = 0;
    int age = 0; int height = 0; int weight = 0;
    for (int i=0; i<50; i++) {
        scanf("%d %d %d", &age, &height, &weight);

        sum_age += age; sum_height += height; sum_weight += weight;

        (age >= 20 && height >= 160) ? twenty_160 += 1 : 1+1;
        (age < 20 && (height <= 180 || weight >= 60)) ? twenty_180_60 += 1 : 1+1;
        (age >= 30 && (weight >= 40 && weight <= 80)) ? thirty_40 += 1: 1+1;
        (age < 40 && (weight < 85 || height <= 200)) ? forty_85_200 += 1: 1+1;
    }

    printf("Age >= 20 and Height >= 160: %d\n", twenty_160);
    printf("Age < 20 and Height <= 180 or Weight >= 60: %d\n", twenty_180_60);
    printf("Age >= 30 and Weight >= 40 and Weight <= 80: %d\n", thirty_40);
    printf("Age < 40 and Weight < 85 or Height <= 200: %d\n", forty_85_200);
    printf("Average Age: %d\n", sum_age / 50);
    printf("Average Height: %.2lf\n", sum_height / 50);
    printf("Average Weight: %.2lf\n", sum_weight / 50);
}