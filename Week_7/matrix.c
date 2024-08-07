#include <stdio.h>

int main() {
    double matrix_a[3][3], matrix_b[3][3];
    
    for (int i = 0; i < 6; i++) {
        (i < 3) ? scanf("%lf %lf %lf", &matrix_a[i][0], &matrix_a[i][1], &matrix_a[i][2]) : scanf("%lf %lf %lf", &matrix_b[i % 3][0], &matrix_b[i % 3][1], &matrix_b[i % 3][2]);
    }

    printf("A x B\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("%.2lf ", ((matrix_a[i][0] * matrix_b[0][j]) + (matrix_a[i][1] * matrix_b[1][j]) + (matrix_a[i][2] * matrix_b[2][j])));
        }
        printf("\n");
    }

    return 0;
}