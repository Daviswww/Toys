#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main(void) {
    int number, guess;
    
    srand(time(0));// Seed random unmbers
    number = rand() % 10 + 1;
    printf("Guess a number berween 1 and 10:");
    do {
      scanf("%d", &guess);
      if (guess > number) printf("Too high! Try again! ");
      else if (guess < number) printf("Too low! Try again! ");
      else printf("Correct! The number is %d.\n", number);
   }  while (guess != number);
   system("pause");
}
