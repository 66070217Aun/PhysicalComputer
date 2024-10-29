#include <stdio.h>
#include <math.h>

int main() {
    int numX, numY;
    scanf("A%d\nA%d", &numX, &numY);

    printf("%d", (int) pow(2, (numY-numX)));

    return 0;
}