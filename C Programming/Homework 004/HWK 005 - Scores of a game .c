// 編譯器：Dev C++
// 日期：2016/12/18 

#include <stdio.h>
#include <string.h>
#define N 100
#define LEN 60
#define SET 4
/*
Enter the number of players: 3
Enter the name: a
Enter the score: 1 2 3 4
Enter the name: b
Enter the score: 4 5 6 7
Enter the name: c
Enter the score: 6 7 8 9
Player    Set 1   Set 2   Set 3   Set 4   Average
a           1       2       3       4       2.50
b           4       5       6       7       5.50
c           6       7       8       9       7.50
-----------------------------------------------------------
Average    3.67    4.67    5.67    6.67
Maximum    6.00    7.00    8.00    9.00
Minimum    1.00    2.00    3.00    4.00
-----------------------------------------------------------
First place: a 7.50
Second place: b 5.50
Third place: c 2.50
*/ 
//個人總平均
double average(int score[][SET],double a[],int n){
  int j ,i;
  double sum = 0;
  
  for(i = 0; i < n; i++){
   	for (j = 0; j < 4; j++) {
  	sum += score[i][j];
    }
	a[i] = sum / 4;
	sum = 0;
    }
    
}
//set的總平均 
double avg(int score[][SET],double f[],int n){
  int j ,i;
  double sum = 0;
  
  for (j = 0; j < 4; j++) {
   	for(i = 0; i < n; i++){
  	sum += score[i][j];
    }
	f[j] = sum / n;
	sum = 0;
    }
}
//大
double max(int score[][SET],double s[],int n) {
  int i, j;
  double max = 0;
  
  for (j = 0; j < 4; j++){
   	for (i = 0; i < n; i++) {
   		if (score[i][j] > max) max = score[i][j];
	   }
	   s[j] = max;//傳進去
	   max = 0;
    }
}
//小 
double min(int score[][SET],double d[],int n) {
  int i, j;
  double min = score[0][0];
  
  for (j = 0; j < 4; j++){
   	for (i = 0; i < n; i++) {
   		if (score[i][j] < min) min = score[i][j];
	   }
	   d[j] = min;//傳進去 
	   min = score[0][j+1];//直排動一格 
    }
}

int main(void) {
  char name[N][LEN];
  int score[N][SET], n, i, j,ss,dd,ff;
  double a[N],s[N],d[N],f[N],z[N];
  double first = 0,second = 0,third = 0;
 
  printf("Enter the number of players: ");
  scanf("%d", &n);
  
  for (i = 0; i < n; i++) {
  	printf("Enter the name: ");
  	getchar();
  	fgets(name[i], LEN, stdin);   // the last character of name[i] is \n.
  	int len = strlen(name[i]);    // strlen: length of a string
  	name[i][len - 1] = '\0';      // replace \n with \0
  	printf("Enter the score: ");
  	for (j = 0; j < 4; j++) {
  		scanf("%d", &score[i][j]);
	  }
  }//Player Set 1   Set 2   Set 3   Set 4   Average
  average(score, a, n);
  printf("Player    Set 1   Set 2   Set 3   Set 4   Average\n");
  for (i = 0; i < n; i++) {
    printf("%s", name[i]);
  	for (j = 0; j < 4; j++) printf("%7d", score[i][j]);
	printf("%7.2f",a[i]);
  	puts("");
   }
  printf("-----------------------------------------------------------\n");
  avg(score,f,n);
  max(score,s,n);
  min(score,d,n);
   //列印直的平均、大、小 
  printf("Average ");
  for (j = 0; j < 4; j++) {
    printf("%10.2f",f[j]);
   }
   puts("");
   printf("Maximum ");
  for (j = 0; j < 4; j++) {
    printf("%10.2f",s[j]);
   }
   puts("");
  printf("Minimum ");
  for (j = 0; j < 4; j++) {
    printf("%10.2f",d[j]);
   }
  puts("");
  printf("-----------------------------------------------------------\n");
//比大小然後用ss第幾個名字 
  for(i = 0; i < n; i++){
  	if(a[i] > first) {
  		first= a[i];
  		ss = i;
	  }
  }
//第二不超過第一 
  for(i = 0; i < n; i++) {
  	if(a[i] < first) {
  		second = a[i];
  		dd = i;
	  }
  }
//第三不超過第二 
  for(i = 0; i < n; i++) {
  	if(a[i] < second) {
  		third = a[i];
  		ff = i;
	  }
  }
  
  printf("First place: %s %.2f\n",name[ss],first);
  printf("Second place: %s %.2f\n",name[dd],second);
  printf("Third place: %s %.2f\n",name[ff],third);
   
system("pause");
}
