#include <stdio.h>
#include <time.h>
#define N 6

int main(void) {
    int i, j, lottery[N], guess[N], star = 0;
    
    srand(time(0));
    for (i = 0; i < N; i++) {
        lottery[i] = rand() % 49 + 1;
        for (j = 0; j < i; j++)
          if (lottery[i] == lottery[j]) {
            --i;
            break;
            }
    }
    printf("Guess %d numbers between 1 and 49: ", N);
    
    for (i = 0; i < N; i++) scanf("%d",&guess[i]);
    for (i = 0; i < N; i++) printf("%d ",lottery[i]);
    puts ("");
    
    for (i = 0; i < N; i++)
      for (j = 0; j < N; j++)
      if (lottery[i] == guess[j]) star++ ;
    printf("You won %d stars.\n", star);
    
    system("pause");
}
