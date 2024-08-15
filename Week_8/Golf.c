#include <stdio.h>
#include <math.h>

#define PI 3.141592653589793
#define G 9.81

int main()
{
    double o, u, h;
    scanf("%lf\n%lf", &o, &u);

    h = (pow(u, 2) * pow(sin((o * PI) / 180), 2)) / (2 * G);

    printf("theta (degree) : %.lf\n", o);
    printf("u (m/s) : %.lf\n", u);
    printf("h (m) : %.4lf", h);

    return 0;
}