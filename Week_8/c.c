#include <stdio.h>
#include <math.h>
int main()
{
    long int x, y;
    scanf("%li %li", &x, &y);
    printf("sqrt(%li^2+%li^2)=%.2lf", x, y, sqrt(pow(x, 2) + pow(y, 2)));
    return 0;
}
