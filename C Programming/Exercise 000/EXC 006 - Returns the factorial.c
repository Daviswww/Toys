// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2016/10/20

#include <stdio.h>

int x, n;
double sum(int n) {
  double a;
  double b;
  double sum = 0;
  double i, j;
  
  for (i = 1; i <= n; i++){
  b = 1;
  
  for (j = 1.0; j <= i; j++)
  b = b * j;
  a = pow( x, i);
  sum = sum + pow(-1.0, i) * a / b;
  
}
  sum = -sum;
  return sum;
}
  int main(void) {
  printf("Enter x,n: ");
  scanf("%d%d",&x ,&n);
  printf("sum = %.12f", sum(n));
  system("pause");
}
