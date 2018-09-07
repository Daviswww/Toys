// 編譯器：Dev C++
// 日期：2016/11/10

#include <stdio.h>

//1 + 2^2 + 3^2 + ... + n^2
double b(int n) {
  int i;
  double sum = 0;
  for (i = 1; i <= n; i++) sum += pow(i,2);
  return sum;
}

//n!
double a(int n) {
  int i;
  double summ = 1;
  for (i = 1; i <= n; i++) summ *= i ;
  return summ;
}

int main(void) {
  int n;
  double i, sum = 0 ;
  printf("Enter n: ");
  scanf("%d", &n);
  for (i=1 ; i<=n ; i++ ) {
      sum += b(i) / a(i);}//相除 
  printf("%.20f\n", sum);
  system("pause");
}
