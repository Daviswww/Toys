// 編譯器：Dev C++
// 日期：2017/03/16 

#include <stdio.h>
#include <math.h>
#define LEN 80

typedef struct {
  double x[LEN], y[LEN];
} Point;

double max_min(Point p, double q[], int n){
  int i, o, k;
  double max, min = q[0];
  //比大小 
  for(i= 0; i < n; i++) {
  	if(q[i] > max) {
  	  max = q[i];
	  o = i;	
	  }
  	if(q[i] < min) {
  	  min = q[i];
	  k = i; 
	  }
    }
  printf("(%.4f, %.4f) is nearest to (0.0000, 0.0000).\n",p.x[k], p.y[k]);
  printf("(%.4f, %.4f) is farest from (0.0000, 0.0000).",p.x[o], p.y[o]);
}
int main(void) {
  FILE *fp;
  char name[LEN];
  int i = 0, n = 0;
  double a, b, q[LEN];
  Point p;
  printf("Enter the file name: ");
  scanf("%s", &name);
  
  if ((fp = fopen(name, "r")) == NULL) printf("%s cannot be opened.\n", name);
  else {
  	printf("The points are as follows: \n");
  	while(!feof(fp) && fscanf(fp,"%lf %lf", &p.x[i], &p.y[i]) > 0){
  	  printf("(%.4f, %.4f)  ", p.x[i], p.y[i]);
  	  q[i] = sqrt(p.x[i] * p.x[i] + p.y[i] * p.y[i]);//計算距離 
  	  i++;
  	  n = i;//存幾筆 
    }
    puts("");
    puts("");
    max_min(p, q, n);//列印最近、最遠 
  	fclose(fp);
  }
}
