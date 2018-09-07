// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2016/10/06 

#include <stdio.h>

int main(void) {
 
  int i = 1, n, sum = 0;
  printf("Input n : ");
  scanf("%d", &n);
  printf("number sum(1..n)\n");
  
  while (i <= n) {
    sum = (1 + i) * i/2;
    printf("%10d%10d%10d%10d\n", i, i*i, i*i*i, sum);
    ++i;
    
  }
  system("pause");
}

