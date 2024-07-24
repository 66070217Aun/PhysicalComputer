#include <stdio.h>

int main() {
  double score;
  scanf("%lf", &score);

  (score > 100 || score < 0) ? printf("Out of Range") :
    (score >= 80) ? printf("A") :
    (score >= 70) ? printf("B") :
    (score >= 60) ? printf("C") :
    (score >= 50) ? printf("D") : printf("F");

  return 0;
}
