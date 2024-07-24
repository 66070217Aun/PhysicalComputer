#include <stdio.h>

int main() {
  double a, b, c;
  scanf("%lf\n%lf\n%lf", &a, &b, &c);
  
  (a+b > c && a+c > b && b+c > a) ? printf("Triangle is valid.") : printf("Triangle is not valid.");

  return 0;
}


