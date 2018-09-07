#include <stdio.h>
#include <math.h>
#define SIZE 100
#define LEN 30

typedef struct {
  double x, y;
} Point;

double d(Point p){
  return sqrt(p.x * p.x + p.y * p.y);
}

int main(void) {
    
    FILE *fp;
    char f[LEN];
    Point p[SIZE];
    int i = 0, max = 0, min = 0;
    
    printf("Enter the fill name: ");
    scanf("%s", f);
    
    if((fp = fopen(f, "r")) == NULL)printf("The fille %s cannot be opened.\n",f);
    else {
      fscanf(fp, "%lf %lf", &p[i].x, &p[i].y);
      while(!feof(fp)) {
        ++i;
        fscanf(fp, "%lf %lf", &p[i].x, &p[i].y);
        if(d(p[i]) > d(p[max])) max = i;
        if(d(p[i]) < d(p[min])) min = i;
      }
      printf("(%f, %f) is the ferest from the original point and the distance is %f.\n",p[max].x, p[max].y, d(p[max]));
      printf("(%f, %f) is the ferest from the original point and the distance is %f.\n",p[min].x, p[min].y, d(p[min]));
    }
    fclose(fp);
    system("pause");
}  
