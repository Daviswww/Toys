#include <stdio.h>
#include <math.h>

typedef struct {
        double x, y;
        } Point;
                
double distance(Point a, Point b) {
       return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
       }
       
double area(Point a, Point b, Point c) {
       double ab = distance(a, b), bc = distance(b, c), ca = distance(c, a);
       if (ab + bc > ca && bc + ca > ab && ca + ab >bc) {
              double s = (ab + bc + ca)/2;
              return sqrt(s * (s - ab) * (s - bc) * (s - ca));
              } else return 0;
       }

int main(void){
  Point a, b, c;
  printf("Enter three point: ");
  scanf("%lf%lf%lf%lf%lf%lf", &a.x ,&b.y, &b.x, &b.y, &c.x, &c.y);
  double triangle_area = area(a, b, c);
  
  if(triangle_area > 0) printf("The triangle area is %f. \n",triangle_area);
  else printf("The triangle cannot be formed\n");
  
  system("pause");
}
