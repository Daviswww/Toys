// 編譯器：Dev C++
// 日期：2016/11/17

#include <stdio.h>
#define SIZE 100

int main(void) {

  int n, i, j, a[SIZE] = {0}, b = 0, s = 9999;

  printf("Input numbers: ");
  scanf("%d", &n);
  printf("Input %d numbers: " ,n);
  for (i = 0; i < n ; i++) {
    scanf("%d", &a[i]);
    if (a[i] > b) b = a[i]; //如果新的值大於0就取代為新的值 
    if (a[i] < s) s = a[i]; //如果新的值小於9999就取代為新的值 
}
    printf("The largest number is %d.\n", b);
    printf("The smallest number is %d.\n", s);

  system("pause");
}
