// 編譯器：Dev C++
// 日期：2017/03/04

 
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 4

typedef struct {
  double x, y;
} Point;

double distance(Point a, Point b) {
  return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main(void) {
  Point p[SIZE];
  int i, o;
  double area[3],a, b, c, max = 0;
  printf("Enter 4 ponts: ");
  scanf("%lf%lf", &p[0].x, &p[0].y);
  scanf("%lf%lf", &p[1].x, &p[1].y);
  scanf("%lf%lf", &p[2].x, &p[2].y);
  scanf("%lf%lf", &p[3].x, &p[3].y);
  
 //計算三角形面積  0 0 0 3 1 1 4 0
 //利用一個陣列存面積 
 //(0, 0), (0, 3), and (1, 1) is 1.5000.
  a = distance(p[0], p[1]), b = distance(p[1], p[2]), c = distance(p[2], p[0]);
  if (a + b > c && b + c > a && c + a > b) {
    double s = (a + b + c)/2;
    area[0] = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The triangle area by (%.0f, %.0f), (%.0f, %.0f), and (%.0f, %.0f) is %.4f.\n", p[0].x, p[0].y, p[1].x, p[1].y, p[2].x, p[2].y, area[0]);
  } else printf("The triangle cannot be formed.\n");
  
  //(0, 0), (0, 3), and (4, 0) is 6.0000.
  a = distance(p[0], p[1]), b = distance(p[1], p[3]), c = distance(p[3], p[0]);
  if (a + b > c && b + c > a && c + a > b) {
    double s = (a + b + c)/2;
    area[1] = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The triangle area by (%.0f, %.0f), (%.0f, %.0f), and (%.0f, %.0f) is %.4f.\n", p[0].x, p[0].y, p[1].x, p[1].y, p[3].x, p[3].y, area[1]);
  } else printf("The triangle cannot be formed.\n");
  
  //(0, 0), (1, 1), and (4, 0) is 2.0000.
  a = distance(p[0], p[2]), b = distance(p[2], p[3]), c = distance(p[3], p[0]);
  if (a + b > c && b + c > a && c + a > b) {
    double s = (a + b + c)/2;
    area[2] = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The triangle area by (%.0f, %.0f), (%.0f, %.0f), and (%.0f, %.0f) is %.4f.\n", p[0].x, p[0].y, p[2].x, p[2].y, p[3].x, p[3].y, area[2]);
  } else printf("The triangle cannot be formed.\n");
  
  //(0, 3), (1, 1), and (4, 0) is 2.5000.
  a = distance(p[1], p[2]), b = distance(p[2], p[3]), c = distance(p[3], p[1]);
  if (a + b > c && b + c > a && c + a > b) {
    double s = (a + b + c)/2;
    area[3] = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The triangle area by (%.0f, %.0f), (%.0f, %.0f), and (%.0f, %.0f) is %.4f.\n", p[1].x, p[1].y, p[2].x, p[2].y, p[3].x, p[3].y, area[3]);
  } else printf("The triangle cannot be formed.\n");
  
  //使用迴圈找出最大面積 
  for(i = 0; i < 4; i++){
  	if(area[i] > max){
  		max = area[i];
  		o = i;
	  }
  }
  //使用選擇的方式列印 
  switch ( o ) {
  	case 0: printf("(%.0f, %.0f), (%.0f, %.0f), and (%.0f, %.0f) can form the triangle with the maximum area and the area is %.4f.\n",p[0].x, p[0].y, p[1].x, p[1].y, p[2].x, p[2].y, area[0]); break;
  	case 1: printf("(%.0f, %.0f), (%.0f, %.0f), and (%.0f, %.0f) can form the triangle with the maximum area and the area is %.4f.\n",p[0].x, p[0].y, p[1].x, p[1].y, p[3].x, p[3].y, area[1]); break;
  	case 2: printf("(%.0f, %.0f), (%.0f, %.0f), and (%.0f, %.0f) can form the triangle with the maximum area and the area is %.4f.\n",p[0].x, p[0].y, p[2].x, p[2].y, p[3].x, p[3].y, area[2]); break;
  	case 3: printf("(%.0f, %.0f), (%.0f, %.0f), and (%.0f, %.0f) can form the triangle with the maximum area and the area is %.4f.\n",p[1].x, p[1].y, p[2].x, p[2].y, p[3].x, p[3].y, area[3]); break;
  }

  system("pause");
}
