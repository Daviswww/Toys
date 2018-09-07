#include <stdio.h>
#define SIZE 100

void read_array(double a[],int n){
  int i;
  for (i = 0; i < n; i++) scanf("%lf",&a[i]);
}

void print_array(double a[],int n){
  int i;
  for (i = 0; i < n; i++) printf("%lf", a[i]);
  puts("");
}

double average_array(double a[],int n){
  int i;
  double total = 0;
  for (i = 0; i < n; i++) total += a[i];
  return total/n;
}

int array_max(double a[],int n){
  int i, max = 0;
  for (i = 0; i < n; i++) max = a[i] > a[max] ? i : max;
  return max;
}

int array_min(double a[],int n){
  int i, min = 0;
  for (i = 0; i < n; i++) min = a[i] < a[min] ? i : min;
  return min;
}

int main (void) {
  double a[SIZE];
  int n, i;
    
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter %d numbers: ", n);
    
  read_array(a, n);
  print_array(a, n);
  printf("The average of the array is %f. \n",average_array(a, n));
  printf("The maximum of the array is %f. \n",a[array_max(a, n)]);
  printf("The minimum of the array is %f. \n",a[array_min(a, n)]); 
    
  system("pause");
}
