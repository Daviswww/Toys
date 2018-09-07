#include <stdio.h>
#include <stdlib.h>
double dist(double x1, double y1, double x2, double y2) {
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
double area(double a, double b, double c) {
  if (a + b > c && b + c > a && c + a > b) {
    double s = (a + b + c)/2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    return area;
  } else return 0;
}

 int main(void) {
  double x1, y1, x2, y2, x3, y3;
  
  printf("Enter three points: ");
  scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
  
  double a = dist(x1, y1, x2, y2),b = dist(x2, y2, x3, y3), c = dist(x3, y3, x1, y1);
  
  if (area(a, b, c) > 0) printf("Area = %lf\n", area(a, b, c));
  else printf("The triangle cannot be formed.\n");
 
  system("pause");
}
