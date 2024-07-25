#include <stdio.h>

int main() {
  int number; scanf("%d", &number);

  for (int i=1; i<=number; i++) {
    (i % 3 == 0 && i % 5 == 0) ? printf("FizzBuzz") : 
    (i % 5 == 0) ? printf("Buzz") :
    (i % 3 == 0) ? printf("Fizz") : printf("%d", i);
    printf("\n");
  }

  return 0;
}
