#include <stdio.h>
#define SIZE 10

int main(void) {
  int i, n, j;
  int score, grade[SIZE] = {0};
  double total = 0;
  
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter %d scores: ", n);
  for (i = 0; i < n; i++) {
      scanf("%d",&score);
      total += score;
      grade[score < 100 ? score/10 : 9]++;
      }
  for (i = 0; i < SIZE; i++) {
      printf("%2d -%3d %3d ", i * 10, i < 9 ? i * 10 + 9 : 100, grade[i]);
      for(j = 0; j < grade[i]; j++) printf("*");
      puts("");
      }
  printf("The class average is %f\n", total/n);
  system("pause");
}
