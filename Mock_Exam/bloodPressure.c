#include <stdio.h>

int main() {
  double sbp, dbp;
  scanf("%lf\n%lf", &sbp, &dbp);

  if (sbp <= 140 && dbp <= 90) {
    printf("Normal");
  } else {
    printf("Hypertension");
  }

  return 0;
}
