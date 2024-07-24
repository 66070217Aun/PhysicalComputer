#include <stdio.h>

int main() {
  double price, percent, amount;
  scanf("%lf\n%lf\n%lf", &price, &percent, &amount);

  double discount = ((price*(1-(percent/100))) * amount);
  double free = ((((int)  amount/3) * 2)+(amount - (3*((int) amount/3 )))) * price;
  
  (discount > free) ? printf("Buy 2 Get 1\n%.2lf", free) : printf("Discount %d%%\n%.2lf", (int) percent, discount);

  return 0;
}
