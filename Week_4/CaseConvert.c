#include <stdio.h>

int main() {
  char check;
  scanf("%c", &check);

  (check > 96 && check < 123) ? printf("%c", check - 32) :
    (check > 64 && check < 91) ? printf("%c", check + 32) : 
    printf("error");

  return 0;
}
