// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2016/11/24

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void random_array(int a[], int n){
  int i, j;
  for(i = 0; i < n; i++) {
    a[i] =rand()% n + 1;
    for(j = 0; j < i; j++)
    if(a[i] == a[j]) {
      --i;
      break;
      }
  }
}

void print_array(int a[], int b[], int n) {
     int i;
     for(i = 0; i < n; i++) b[i] == 1 ? printf(" %d", a[i]) : printf(" *");
     puts("");
}

int main(void) {
    int a[SIZE], b[SIZE] = {0};
    int n, i, p;
    
    srand(time(0));
    printf("Enter n: ");
    scanf("%d", &n);
    random_array(a, n);
    print_array(a, b, n);
    
    printf("Pick a number: ");
    scanf("%d", &p);
    if(b[p - 1] != 1) b[p - 1] = 1;
    else printf("%d is already selected.\n", a[p - 1]);
    
    print_array(a, b, n);

system("pause");
}   
