// 編譯器：Dev C++
// 日期：2017/03/03

 
#include <stdio.h>
#include <stdlib.h>
#define LEN 30
#define SIZE 50
 
typedef struct {
  char name[LEN];
  char course[LEN];
  unsigned short score;
} Record;

int main(void) {
 
  Record r[SIZE];
  int len, i, n, max = 0, a;
  
  printf("Enter the number of student: ");
  scanf("%d",&n);
  getchar();
  //用一個迴圈讓他可以輸入多個學生 
  for(i = 0; i < n; i++){
  	printf("Enter the name: ");
    fgets(r[i].name, 30, stdin);
    len = strlen(r[i].name);
    r[i].name[len - 1] = '\0';
    printf("Enter the course: ");
    fgets(r[i].course, LEN, stdin);
    len = strlen(r[i].course);
    r[i].course[len - 1] = '\0';  
    printf("Enter the score: ");
    scanf("%hu", &r[i].score);
    getchar();
  }
  
  printf("========== List of Grade Records ==================\n");
  //用一個迴圈讓他可以列印全部學生 
  for(i = 0; i < n; i++){
  	printf("%s %s %hu\n", r[i].name, r[i].course, r[i].score);
  }
  
  printf("---------------------------------------------------\n");
  //用一個迴圈一個一個找最高分 
  for(i = 0; i < n;i ++ ){
  	if(r[i].score > max){
      max = r[i].score;
      a = i;
	  }
  }
  printf("%s has the heighest point %d.",r[a].name, r[a].score);
  
  system("pause");
}
