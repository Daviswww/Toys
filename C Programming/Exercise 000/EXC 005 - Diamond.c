// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2016/10/13 
 
#include <stdio.h>

int main(void) {
  int n, i, j;
  
  printf("Enter n: ");
  scanf("%d", &n);
/*
Enter n: 1
1
Enter n: 2
 3
321
 3
Enter n: 3
  5
 543
54321
 543
  5
Enter n: 4
   7
  765
 76543
7654321
 76543
  765
   7
*/
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= n - i; j++) printf(" ");
    for (j = 1; j <= 2 * i - 1; j++) printf("%d", n * 2 - j);
    printf("\n");
  }
  for (i = n - 1; i >= 1; i--) {
    for (j = 1; j <= n - i; j++) printf(" ");
    for (j = 1; j <= 2 * i - 1; j++) printf("%d", n * 2 - j);
    printf("\n");
  }
  system("pause");
}
