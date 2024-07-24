#include <stdio.h>
#include <ctype.h>

int main() {
  char check;
  scanf("%c", &check);

  (isdigit(check)) ? printf("number") :
    (islower(check)) ? printf("lowercase") :
    (isupper(check)) ? printf("uppercase") :
    printf("error");

  return 0;
}
