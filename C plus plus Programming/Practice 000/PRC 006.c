#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 30

void r(int a[], int n){
     int i, j;
  for( i = 0; i < n; i++) {
          a[i] = rand() % n + 1;
          for(j= 0; j < i; j++)
          if(a[i] == a[j]) {
                  i--;
                  break;
                  }
          }
  }
  
void c(int a[], int b[][SIZE], int n, int m){
     int i, j, k = 0;
     for(i = 0; i < m; i++)
       for(j = 0; j < n; j++) b[i][j] = a[k++];
       }
       
void p(int b[][SIZE], int n, int m){
     int i, j;
     for(i = 0; i < m; i++){
       for(j = 0; j < n; j++) printf("%5d",b[i][j]);
       puts("");
       }
}

int main(void) {
    int a[SIZE * SIZE], b[SIZE][SIZE], m, n;
    
    srand(time(0));
    printf("Enter m, n: ");
    scanf("%d%d", &m, &n);
    
    r(a, m * n);
    c(a, b, m, n);
    p(b, m ,n);
    system("pause");
}
       
