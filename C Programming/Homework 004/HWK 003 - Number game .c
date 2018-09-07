// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2016/12/18 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void random_array(int a[], int n) {
  int i, j;
  for (i = 0; i < n; i++) {
    a[i] = rand() % n + 1;
    for (j = 0; j < i; j++)
      if (a[i] == a[j]) {
        --i;
        break;            
      }
  } 
}

void print_array(int a[], int b[], int n) {
  int i;  
  for (i = 0; i < n; i++) b[i] == 1 ? printf(" %d", a[i]) : printf(" *");  
  puts(""); 
}

int main(void) {
  int a[SIZE], b[SIZE] = {0};
  int n, i, p, q,r,comp = 0,play = 0;
  
  srand(time(0));
  printf("Enter n: ");
  scanf("%d", &n); 
  random_array(a, n);
  print_array(a, b, n);
  /*
  Enter n: 6
  * * * * * *
  */
  for(i = 0; i < n/2; i++) {
  do {
    printf("Pick a number: ");
    scanf("%d", &p);
  } while  (b[p - 1] == 1);
  b[p - 1] = 1;
  //play Pick
  do {
	r = rand() % n + 1;
  } while  (b[r - 1] == 1);
  b[r - 1] = 1;
  //comp Pick
  print_array(a, b, n);
  printf("Player: %d Computer: %d\n", a[p - 1] , a[r - 1]); //Player: x Computer: x
  if(a[p - 1] > a[r - 1]) {
    play += a[p - 1] + a[r - 1];
  	printf("The player wins %d points.\n",play);
  }//The player wins x points.
  
  if(a[p - 1] < a[r - 1]) {
    comp += a[p - 1] + a[r - 1];
  	printf("The computer wins %d points.\n",comp);
  }//The computer wins x points.
}
	printf("The player gets total %d points.\n",play);
	printf("The computer gets total %d points.\n",comp);
	if(play > comp) printf("The player wins the game.\n");
	if(play < comp) printf("The computer wins the game.\n");
	
	system("pause");
}
