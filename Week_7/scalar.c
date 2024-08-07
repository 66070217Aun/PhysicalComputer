#include <stdio.h>
#include <stdbool.h>
int main() {
    double matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%lf", &matrix[i][j]);
        }
    }

    bool scalar = true;
    int number = 0;
    if (matrix[0][0] != matrix[1][1] || matrix[0][0] != matrix[2][2]){
        scalar = false;
    }

    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++) {
            if (matrix[i][j] != 0 && !((j == 1 && i == 1) || (j == 0 && i == 0) || (j == 2 && i == 2))) {
                scalar = false;
            }                
        }
    }

    if (scalar){
        printf("This is a scalar matrix");
    } else {
        printf("This is not a scalar matrix");
    }
    

    return 0;
}