// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2016/02/23 

#include<stdio.h>
#define SIZE 100

typedef struct {
  double x, y;
} Point;
//-2 -3 1 2 0 4 3 6 5 12
void read_point(Point p[], int n) {
     int i;
     for(i = 0; i < n; i++) scanf("%lf%lf", &p[i].x, &p[i].y);
     }
     
void print_point(Point p[], int n) {
     int i;
     for(i = 0; i < n; i++) printf("(%lf%lf)", p[i].x, p[i].y);
     puts("");
     }
     
double distance(Point p) {
       return sqrt(pow(p.x, 2) + pow(p.y, 2));
       }
       
int nearest(Point p[], int n) {
    int i, min = 0;
    for(i = 1; i < n; i++) if(distance(p[i]) < distance(p[min])) min = i;
    return min;
}

int farest (Point p[], int n) {
    int i, max = 0;
    for(i = 1; i < n; i++) if(distance(p[i]) > distance(p[max])) max = i;
    return max;
}

int main(void) {
    int n;
    Point p[SIZE];
    
    printf("Enter n: ");
    scanf("%d", &n);
    
    read_point(p, n);
    print_point(p, n);
    
    int min = nearest(p, n), max = farest(p, n);
    
    printf("(%lf, %lf) is nearest to (0, 0). The distance is %f.\n", p[min].x, p[min].y, distance(p[min]));
    printf("(%lf, %lf) is farest from (0, 0). The distance is %f.\n", p[max].x, p[max].y, distance(p[max]));    
    
    system("pause");
}
