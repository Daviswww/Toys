// �sĶ���GDev C++
// ����G2017/03/16 


#include <stdio.h>
#include <string.h>
#define LEN 80
#define LE 80
//�p�⥭���� 
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
//��j 
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
//��p 
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
      k++;//�X�ӤH 
	  char *cy;
      cy = strtok(line, ":");//���ΦW�r 
	  printf("%-20s", cy);
      int sum = 0, j = 0;
      do {
	    int score = atoi(cy);//������@�����@�����
	    if(score != 0) {
	    printf("%-10d ", score);
		ecp[i][j++]	= score;//�����Ʀr 
		}
	    sum += score;
      } while((cy = strtok(NULL, " \n")) != NULL);//���μƦr 
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
