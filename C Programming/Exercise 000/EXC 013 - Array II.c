// 編譯器：Dev C++
// 日期：2016/12/15 

#include <stdio.h>
#define ROW 50
#define COL 50
/*
Enter n: 2
 1 2
 2 3
 Enter n: 3
 1  2  3   
 2  4  5  
 3  5  6
 Enter n: 4
 1  2  3  4  
 2  5  6  7 
 3  6  8  9  
 4  7  9 10  
Enter n: 5
 1  2  3  4  5 
 2  6  7  8  9 
 3  7 10 11 12  
 4  8 11 13 14  
 5  9 12 14 15
*/
int main(void) {
  int n, i, j, a[ROW][COL], k = 0;
 
  printf("Enter n: ");
  scanf("%d", &n);
  
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
        if(i < j ) a[i][j] = ++k;//上 
        if(i == j ) a[i][j] = ++k;//中 
        if(i > j ) a[i][j] = a[j][i];//對印下來 
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) printf("%5d", a[i][j]); 
	puts("");
  }  
  system("pause");
}
