#include <stdio.h>
#include <math.h>

void perimeter(double a, double b){
  printf("Perimeter: %.2lf\n", sqrt(pow(a, 2) + pow(b, 2)) + a + b);
}

void area(double a, double b) {
  printf("Area: %.2lf", (a * b) / 2);
}

int main(){
  double a, b;
  scanf("%lf\n%lf", &a, &b);

  perimeter(a, b);
  area(a, b);

  return 0;
}
