// 編譯器：Dev C++
// 日期：2016/1/8

#include <stdio.h>
#include <time.h>
#define M 99
#define N 99
int main(void) {
  int a[M][N], i, j, n, m, nn, xx,r;
  printf("Enter m and n:");
  scanf("%d%d",&n ,&m);
  //列印亂數 
  for(i = 0; i < n; i++){
  	for(j = 0; j < m ; j++){
	  a[i][j] = rand() % + 99;
	  printf("%5d", a[i][j]);
	}
  puts("");
  }
  printf("Enter number of steps:");
  scanf("%d",&nn);
  //選亂數 
   for(i = 0; i < n; i++){
  	for(j = 0; j < m ; j++){
  	  r = rand() % + m;
  	  if(j == r ) {
		xx += a[i][j];//亂數總和 
  	  	a[i][j] = '*';
		printf("%5c", a[i][j]);
		}
	  else printf("%5d", a[i][j]);
	}
	puts("");
  }
  //列印總和 
  printf("The total points are %d.\n",xx);
  system("pause");
}
