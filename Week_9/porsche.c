#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char *str;
  str = (char *) malloc(sizeof(char) * 15);

  strcpy(str, "Porsche Arnold");

  char *ptr = str;
  while (ptr < (str + 14)) {
    printf("%c", *ptr++);
  }

  free(str);

  printf("\n");

  return 0;
}