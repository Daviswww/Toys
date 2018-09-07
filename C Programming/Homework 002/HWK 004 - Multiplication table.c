// 編譯器：Dev C++
// 日期：2016/10/28

#include <stdio.h>

int main(void) {
  int n, i, j, s;
  
  printf("Enter n: ");
  scanf("%d", &n);

  printf("   |");
  for (j = 1; j <= n; j++) printf("%3d", j); //印1 2 3 4 ........... 
  puts(""); //換行 
  printf("---+"); //列印 
  for (j = 1; j <= n; j++) printf("---"); //印--- 
  puts(""); //換行
  
  for (i = 1; i <= n; i++, s--) {
    printf("%2d |", i);
    for (s = i; s > 1; s--) printf("   "); //列印空白是斜的 

    for (j = i; j <= n; j++)  //J等於I然後持續一直加到小於N 就會出來1乘1第2行就不會出來 
	printf("%3d", i * j); //列印 I * J 的數 
    puts("");
  }
  
 
  
  
  system("pause");
}
