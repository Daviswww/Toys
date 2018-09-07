// 編譯器：Dev C++
// 日期：2016/10/27 

#include <stdio.h>
#include <time.h>
/*
n/(1/x1 + 1/x2 + ... + 1/xn) where x1, x2, x3, ..., xn
*/
double harmonic_mean(int n) {
  int i;
  double sum = 0, r;    
  for (i = 0; i < n; i++) { 
    printf("%f ", r = rand() % 100 + 1);
    sum += 1 / r;  //  亂數分之一持續一直加 
  } 
  puts("");
  return n/sum;  //傳回 
}

int main(void) {
  int n, i;
  printf("Enter n: ");
  scanf("%d", &n);
  
  srand(time(0));
  printf("The harmonic mean is %.12f.\n", harmonic_mean(n));
  system("pause");
}
