// 編譯器：Dev C++
// 日期：2017/03/07 


#include <stdio.h>

typedef struct { 
   double x, y;
 } Point;
//判斷垂直、斜線等... 
void line(Point a, Point b){
  if(a.x == b.x == a.y == b.y ) printf("It is not a line.\n");
  if(a.x == b.x && a.y != b.y ) printf("The line is vertical.\n");
  if(a.x != b.x && a.y == b.y) printf("The line is horizontal.\n");
  if(a.x == a.x && b.y == b.y && a.x != b.x && a.y != b.y) printf("The line is oblique.\n");
}
int main(void) {
  Point a, b;
  int i;
   
  //可輸入4次 
  for(i = 0; i < 4; i++){
    printf("Enter two points of the line: ");
    scanf("%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y);
    //使用函式 
    line(a,b);
  } 
  system("pause"); 
}
