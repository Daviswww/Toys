// �sĶ���GDev C++
// ����G2017/03/07 


#include <stdio.h>

typedef struct { 
   double x, y;
 } Point;
//�P�_�����B�׽u��... 
void line(Point a, Point b){
  if(a.x == b.x == a.y == b.y ) printf("It is not a line.\n");
  if(a.x == b.x && a.y != b.y ) printf("The line is vertical.\n");
  if(a.x != b.x && a.y == b.y) printf("The line is horizontal.\n");
  if(a.x == a.x && b.y == b.y && a.x != b.x && a.y != b.y) printf("The line is oblique.\n");
}
int main(void) {
  Point a, b;
  int i;
   
  //�i��J4�� 
  for(i = 0; i < 4; i++){
    printf("Enter two points of the line: ");
    scanf("%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y);
    //�ϥΨ禡 
    line(a,b);
  } 
  system("pause"); 
}
