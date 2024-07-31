#include <stdio.h>
#include <stdlib.h>

int main() {
    int number, number_tmp;
    scanf("%d", &number);
    number_tmp = number/2; number_tmp += 1;

    int i = 0;
    int back = (number_tmp - 2) * -1;
    int tmp = number_tmp;
    while (i < number) {
        for (int j = number_tmp; j > (number_tmp * -1) + 1; j--) {
            (j == tmp || j == back) ? printf("-") : printf("#");
        }
        printf("\n");
        i++; tmp--; back++;
    }

    return 0;
}