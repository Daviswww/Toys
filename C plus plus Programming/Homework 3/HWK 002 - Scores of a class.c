// 編譯器：Dev C++
// 日期：2017/03/16 


#include <stdio.h>
#include <string.h>
#define LEN 80
#define LE 80
//計算平均值 
double avg(int ecp[][LE], int k){
  int i, j, a;
  for(j = 0; j < 3; j++){
  	a = 0;
    for(i = 0; i < k;i++){
      a += ecp[i][j];
	  }
	printf("%.2f      ",(double)a/k);
  }
}
//比大 
int max(int ecp[][LE], int k){
  int i, j, a;
  for(j = 0; j < 3; j++){
  	a = 0;
    for(i = 0; i < k;i++){
      if(ecp[i][j] > a) a = ecp[i][j];
	  }
	printf("%d         ",a);
  }
}
//比小 
int min(int ecp[][LE], int k){
  int i, j = 0, a;
  for(j = 0; j < 3; j++){
  	a = 100;
    for(i = 0; i < k;i++){
      if(ecp[i][j] < a) a = ecp[i][j];
	  }
	printf("%d         ",a);
  }
}
int main(void) { 
  int i = 0, j = 0, k = 0, ecp[LEN][LE];
  char name[LEN];
  FILE *fp; // fp = file pointer   
   
  printf("Enter the file name: ");
  scanf("%s", name);
  // fopen opens file. Exit program if unable to create file 
  if ((fp = fopen(name, "r")) == NULL) {
    puts("File could not be opened");
  } 
  else {
  	printf("Student Name      English  Calculus  C Programming   Average\n"); 
    char line[LEN], so[LEN][LE];
    while(!feof(fp) && fgets(line, LEN, fp) != NULL) {
      k++;//幾個人 
	  char *cy;
      cy = strtok(line, ":");//切割名字 
	  printf("%-20s", cy);
      int sum = 0, j = 0;
      do {
	    int score = atoi(cy);//ｃｈａｒ　ｔｏ　ｉｎｔ
	    if(score != 0) {
	    printf("%-10d ", score);
		ecp[i][j++]	= score;//紀錄數字 
		}
	    sum += score;
      } while((cy = strtok(NULL, " \n")) != NULL);//切割數字 
      printf(" %-10.2f\n", (double)sum/3);
	  i++;    
	}
  }
  printf("-----------------------------------------------------------\n");
  printf("Average             ");
  avg(ecp, k);
  puts("");
  printf("Maximum             ");
  max(ecp, k);
  puts("");
  printf("Maximum             ");
  min(ecp, k);
  puts("");
  fclose(fp); // fclose closes file   
  system("pause"); 
}
