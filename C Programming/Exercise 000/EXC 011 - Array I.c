// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2016/12/01 

#include <stdio.h>
#define SIZE 100
//13 -12 77 5 -8
//±½´y 
void read_array(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) scanf("%d", &a[i]);
}
//¦C¦L 
void print_array(int a[], int n) {
  int i;  
  for (i = 0; i < n; i++) printf("%d ", a[i]); 
  puts("");
}
//N! 
double xx_sum(int n){
  int j,sum = 1;
    for(j = 1; j <= n; j++ ){
      sum *= j;
  }
  return sum;
}
// x[0]/1! + x[1]/2! + x[2]/3! + .... + x[n - 1]/n! 
double array_sum(int a[], int n){
  int i;
  double summ = 0;
  for(i = 0; i < n; i++ ){
    summ += a[i]/xx_sum(i + 1);
  }
  return summ;
}
int main(void) {
  int a[SIZE], n, i;
  
  printf("Enter n: ");
  scanf("%d", &n);
  
  printf("Enter %d array: ", n); 
  read_array(a, n);
  
  printf("The array elements are: ");
  print_array(a, n);
  
  printf("The array sum is %.10f\n",array_sum(a,n));
  
  system("pause");
}

