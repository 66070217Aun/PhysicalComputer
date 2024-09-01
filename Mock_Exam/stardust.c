#include <stdio.h>
#include <math.h>

void merge(double arr[], int left, int right)
{
  if (left < right)
  {
    int mid = left + (right - left) / 2;
    merge(arr, left, mid);
    merge(arr, mid + 1, right);
    int n1 = mid - left + 1, n2 = right - mid;
    double L[n1], R[n2];
    int i, j, k;
    for (i = 0; i < n1; i++)
      L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
      R[j] = arr[mid + 1 + j];
    i = j = 0;
    k = left;
    while (i < n1 && j < n2)
      arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];
    while (i < n1)
      arr[k++] = L[i++];
    while (j < n2)
      arr[k++] = R[j++];
  }
}

int main()
{
  int num;
  scanf("%d\n", &num);
  double total;
  double allNum[num];

  for (int i = 0; i < num; i++)
  {
    scanf("%lf", &allNum[i]);
    total += allNum[i];
  }

  merge(allNum);

  total /= num;
  printf("%.2lf\n", total);

  double find = (num % 2 == 0) ? (allNum[(num / 2)] + allNum[((num / 2)) - 1]) / 2 : allNum[num / 2];
  printf("%.2lf\n", find);

  double newTotal = 0;
  for (int i = 0; i < num; i++)
  {
    newTotal += pow((allNum[i] - total), 2);
  }

  printf("%.2lf\n", sqrt(newTotal / num));

  return 0;
}
