#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);

    for(int i=0; i<number;i++){
        printf("%d ", i+1);
    }

    return 0;
}