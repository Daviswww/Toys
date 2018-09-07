// 編譯器：Dev C++
// 日期：2017/03/18 

#include <stdio.h>
#define SS 100

typedef struct {
  int a, b;
} Point;

//a區比小 
int min_a(Point p[SS]){
  int i, min = p[0].a;
  for(i = 0; i < 5; i++){
  	if(p[i].a < min) min = p[i].a; 
  }
  return min;
}

//b區比小 
int min_b(Point p[SS]){
  int i, min = p[5].a;
  for(i = 5; i < 11; i++){
  	if(p[i].a < min) min = p[i].a; 
  }
  return min;
}
//由小排到大 
int set(Point p[SS]) {
  int i, j, k, h = 11;
  for(i = 0; i < 10; i++)
    for(j = i + 1; j < 11; j++){
      if(p[i].a > p[j].a) {
        k = p[i].a;
        p[i].a = p[j].a;
        p[j].a = k;
      }	
	}
      
  printf("The uion of two sets is {");
  printf("%d ",p[0].a);
  for(i = 1; i < h; i++) {
    printf(", %d ",p[i].a);
  }
  printf("}.");
}

int main(void) {
  Point p[SS];
  int z, n, m, i = 0;
  
  //printf("Enter the n1: ");
  //scanf("%d",&n);
  printf("Enter the first integer set: ");
  while(i < 5) {
  	scanf("%d",&p[i++].a);
  } 
  
  //printf("Enter  the n2: ");
  //scanf("%d",&m);
  printf("Enter the second integer set: ");
  while(i < 11) {
  	scanf("%d",&p[i++].a);
  } 
  
  //A區列印 
  printf("The smallest number in {");
  printf("%d ",p[0].a);
  for(i = 1; i < 5; i++) {
  	printf(",%d ",p[i].a);
  }
  printf("} is %d",min_a(p));
  puts("");
  
  //B區列印 
  printf("The smallest number in {");
  printf("%d ",p[5].a);
  for(i = 6; i < 11; i++) {
  	printf(",%d ",p[i].a);
  }
  printf("} is %d",min_b(p));
  puts("");
  
  set(p);

  system("pause");
}
