// �sĶ���GDev C++
// ����G2016/12/06 

#include <stdio.h>
#include <time.h> 
#include <stdlib.h>
#include <string.h>
#define N 100

int count(char s[],char ch, int n) {
  int i, sum = 0;
  //�C�L�í^ 
  for (i = 0; i < n; i++) s[i] = rand() % 26 + (rand() % 2 ? 'a' : 'A');
  i = 0;
  //�p�⦳�X�� 
  while(i < n) {
    if(ch == s[i] ){
    sum++;
    }
    i++;
  }
  s[n] = '\0';
  return sum;
}


int main(void) {
  int n,ch,sum;
  char s[N];
  srand(time(0));
  printf("Enter n: ");
  scanf("%d", &n);
  count(s,ch,n);
  printf("The string is %s.\n", s);
  printf("Enter the character:");
  scanf("%s", &ch);
  printf("a appears %d times.",count(s,ch,n));
  system("pause");
  
}
