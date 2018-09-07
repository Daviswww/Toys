//¤é´Á: 106/03/02

#include <stdio.h>
#include <stdlib.h>

typedef struct {
  double x, y;
} Point;

void l(Point a, Point b) {
     double A = a.y -b.y, B = b.x - a.x, C = a.x *  A + a.y * B;
     printf("%fx + %fy = %f\n", A, B, C);
}

int main(void) {
    Point a, b;
    
    printf("Enter two points: ");
    scanf("%lf%lf%lf%lf", &a.x, &a.y, &b.x, &b.y);
    l(a, b);
    system("pause");
}
                   
