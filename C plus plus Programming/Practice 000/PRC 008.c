#include <stdio.h>
#include <math.h>
#define PI 3.14159265359

typedef struct {
        double x, y;
        }Point;

typedef struct {
        Point c;
        double r;
        }Circle;
double area(Circle cr) {
       return PI *cr.r * cr.r;
       }

double cc(Circle cr) {
       return 2 * PI * cr.r;
       }    

int inside(Circle cr, Point p) {
    if(pow(p.x -cr.c.x, 2) + pow(p.x -cr.c.x, 2) <= cr.r * cr.r) return 1;
    else return 0;
}
int main(void) {
    Circle cr;
    printf("Enter a circle (x, y) and r: ");
    scanf("%lf%lf%lf", &cr.c.x, &cr.c.y, &cr.r);
    Point p;
    printf("Enter a point (x, y): ");
    scanf("%lf%lf", &p.x, &p.y);
    printf("The area of the circle is %f.\n",area(cr));
    printf("The circumference of the circle is %f.\n", cc(cr));
    printf("(%f, %f) is %s inside the circle.\n",p.x, p.y, inside(cr, p)? "" : " not ");
    system("pause");
 } 
    
