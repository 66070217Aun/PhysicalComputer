#include <stdio.h>

int main() {
    double number;
    scanf("%lf", &number);

    if (number < 0 || number > 58.855) {
        printf("InValid");
    } else if (number <= 5.032) {
        printf("Bangkok");
    } else if (number <= 35.477) {
        printf("Samut Prakarn");
    } else if (number <= 52.900) {
        printf("Chachoengsao");
    } else {
        printf("Chon Buri");
    };
}