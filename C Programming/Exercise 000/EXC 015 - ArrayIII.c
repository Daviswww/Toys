// 編譯器：Dev C++
// 日期：2016/12/27 

#include <stdio.h>
#define N 900
#define ROW 100
#define COL 100

void random_array(int a[], int n) {
  int i, j,k = 0;
  for (i = 0; i < n * n; i++) {
  	a[i] = rand() % 26 + 1 + 'A';//A - Z
  }
}

void convert_array(int a[], int b[][COL], int n) { //ROW: n col: n
  int i, j, k = 0;
  for (i = 0; i < n; i++) 
  	for (j = 0; j < n; j++) b[i][j] = a[k++];
}

void print_array(int a[][COL], int n) { //ROW: n col: n
  int i, j;
  for (i = 0; i < n; i++) {
  	for (j = 0; j < n; j++) printf("%4c", a[i][j]);
  	puts("");
  }
}

int main(void) {
  int a[N], n, b[ROW][COL];

  printf("Enter n: ");
  scanf("%d", &n);
  
  srand(time(0));
  random_array(a,n);//A - Z
  convert_array(a, b, n);//傳入 
  print_array(b, n);//列印 
  system("pause");
}

