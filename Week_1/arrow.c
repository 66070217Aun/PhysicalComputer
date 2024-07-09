#include <stdio.h>
#include <string.h>

int main() {
    int number;
    scanf("%d", &number);
    char line[number * 2];
    memset(line, 0, number * 2);

    for (int i = 0; i < number + 2; i++){
        for (int j = 0; (i < number) ? j < number + i : j < number; j++) {
            (j == number-1 || j == number - (i+1) || j == (number - 1) + i) ? strcat(line, "*") : strcat(line, " ");
        }
        printf("%s\n", line);
        memset(line, 0, number * 2);
    }

    return 0;
}