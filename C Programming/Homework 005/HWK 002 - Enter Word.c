// 編譯器：Dev C++
// 日期：2016/11/26

#include <stdio.h>
#include <time.h>
#define LEN 80

int main(void) {
  int n, r, i;
  char word[LEN], str[LEN];
  
  srand(time(0));
  printf("Enter nunmber of words: ");
  scanf("%d", &n);
  r = rand() % n;//產生亂數
  printf("Enter %d words: ", n);
  for (i = 0; i < n; i++) {//與亂數相等的挑出來 
  	if (i == r) scanf("%s", word);
    else scanf("%s", str);
  }
 
  printf("The scrabmble word is %s.\n", word);
}

