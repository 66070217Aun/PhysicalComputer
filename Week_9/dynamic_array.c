#include <stdio.h>
#include <stdlib.h>

int main() {
  int size, i;
  int *arr;

  scanf("%d", &size);

  arr = (int *) malloc(sizeof(int) * size);

  for (i = 0; i < size; i++) {
    *(arr + i) = i+1;
  }

  int *ptr = arr;

  printf("Array elements in order: ");
  i = 0;
  while (i++ < size)
    printf("%d ", *ptr++);

  printf("\n");

  printf("Array elements in reverse: ");
  i = size; ptr = (arr + (size - 1));
  while (i-- > 0)
    printf("%d ", *ptr--);
  printf("\n");

  free(arr);

  return 0;
}
