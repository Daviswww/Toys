#include <stdio.h>
#include <stdlib.h>
double sum(int n) {
  int i;
  double sum = 0;
  for (i = 1; i <= n; i++)
    sum += (i * i + 1.0)/(i + 1);
  return sum;
}

int main(void) {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  
  printf("sum(%d) = %.10lf\n", n, sum(n));
  system("pause");
}
