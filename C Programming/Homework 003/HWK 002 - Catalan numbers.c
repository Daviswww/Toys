// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2016/11/26 


#include <stdio.h>
//(2n)! 
double a(int n) {
  int i;
  double sum = 1;
  for (i = 1; i <= 2 * n; i++) 
  sum *= i;
  return sum;
}
//(n+1)! 
double b(int n) {
  int i;
  double summ = 1;
  for (i = 1; i <= n + 1; i++) 
  summ *= i;
  return summ;
}
//n! 
double c(int n) {
  int i;
  double summm = 1;
  for (i = 1; i <= n; i++) 
  summm *= i;
  return summm;
}

int main(void) {
  int n, i;
  double ssum = 0 ;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("1, ");
  for (i = 1 ; i <= n ; i++) {
      ssum = a(i) / (b(i) * c(i));//(2n)! /(n+1)! n! 
	  printf("%.0f, ", ssum);
	  }
  system("pause");
}
