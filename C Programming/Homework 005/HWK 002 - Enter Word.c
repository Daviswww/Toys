// �sĶ���GDev C++
// ����G2016/11/26

#include <stdio.h>
#include <time.h>
#define LEN 80

int main(void) {
  int n, r, i;
  char word[LEN], str[LEN];
  
  srand(time(0));
  printf("Enter nunmber of words: ");
  scanf("%d", &n);
  r = rand() % n;//���Ͷü�
  printf("Enter %d words: ", n);
  for (i = 0; i < n; i++) {//�P�üƬ۵����D�X�� 
  	if (i == r) scanf("%s", word);
    else scanf("%s", str);
  }
 
  printf("The scrabmble word is %s.\n", word);
}

