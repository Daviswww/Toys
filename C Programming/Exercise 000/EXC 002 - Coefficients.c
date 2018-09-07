// 編譯器：Dev C++
// 日期：2016/09/22
 
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  double a, b, c;
 
  printf("Enter coefficients of ax + by = c: ");
  scanf("%lf%lf%lf", &a, &b, &c);
  printf("The line is %lfx + %lfy = %lf\n",  a, b, c); 
  
  if(a * b * c != 0){
       double area = c/a * c/b * 0.5;//三角形公式 
       printf("The triangle area is %lf.\n", area);
  }    else {
       printf("The triangle cannot be formed.\n");
  }
  system("pause");
}
