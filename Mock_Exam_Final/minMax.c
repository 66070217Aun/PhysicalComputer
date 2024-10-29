#include <stdio.h>
#include <string.h>
#include <stdarg.h> // For variable argument lists

int find_extreme(char operation[], int count, ...);

int main() {
    char operation[4];
    int num1, num2, num3, num4, num5;
    int result;

    scanf("%s", operation);
    result = find_extreme(operation, 5, num1, num2, num3, num4, num5);


    if (strcmp(operation, "MAX") == 0) {
        printf("MAX : %d\n", result);
    } else if (strcmp(operation, "MIN") == 0) {
        printf("MIN : %d\n", result);
    }

    return 0;
}

int find_extreme(char operation[], int count, ...) {
    va_list args;
    int i;
    int extreme;

    va_start(args, count);

    if (strcmp(operation, "MAX") == 0) {
        extreme = -1000000000; // Initialize for MAX
        for (i = 0; i < count; i++) {
            int num = va_arg(args, int);
            if (num > extreme) {
                extreme = num;
            }
        }
    } else { // MIN operation
        extreme = 1000000000;  // Initialize for MIN
        for (i = 0; i < count; i++) {
            int num = va_arg(args, int);
            if (num < extreme) {
                extreme = num;
            }
        }
    }

    va_end(args);
    return extreme;
}