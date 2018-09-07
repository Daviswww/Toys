#include <stdio.h>
#include <time.h>

#define SIZE 100

int main(void) {
    int dice[SIZE], n, i, b[SIZE] = {0}, s1, s2;
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    srand(time(0));
    for(i = 1; i < n; i++) dice[i] = rand() % 6 + 1;
    for(i = 1; i < n; i++)
      b[i] == 1 ? printf("%3d", dice[i]) : printf("%3s","*");
    puts("");
    printf("Select two dice: ");
    scanf("%d%d", &s1, &s2);
    b[s1 - 1] = 1;
    b[s2 - 1] = 1;
      for(i = 0; i < n; i++)
      b[i] == 1 ? printf("%3d", dice[i]) : printf("%3s","*");
    puts("");
    system("pause");
}
