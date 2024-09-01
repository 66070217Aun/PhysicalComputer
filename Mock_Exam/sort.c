#include <stdio.h>

int main() {
  int size; scanf("%d\n", &size);
  double allNum[size];

  for(int i = 0; i < size; i++) {
    scanf("%lf", &allNum[i]);
  }

  for (int i = 0; i < size - 1; i++) {
    for (int j = 0; j < size - i - 1; j++) {
      if (allNum[j] > allNum[j+1]) {
        double tmp = allNum[j];
        allNum[j] = allNum[j + 1];
        allNum[j + 1] = tmp;
      }
    }
  }

  for (int i = 0; i < size; i++) { 
    printf("%.2lf ", allNum[i]);
  }
  
  return 0;
}
