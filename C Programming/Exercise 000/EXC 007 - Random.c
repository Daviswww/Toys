// �sĶ���GDev C++
// ����G2016/10/27 

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
    sum += 1 / r;  //  �üƤ����@����@���[ 
  } 
  puts("");
  return n/sum;  //�Ǧ^ 
}

int main(void) {
  int n, i;
  printf("Enter n: ");
  scanf("%d", &n);
  
  srand(time(0));
  printf("The harmonic mean is %.12f.\n", harmonic_mean(n));
  system("pause");
}
