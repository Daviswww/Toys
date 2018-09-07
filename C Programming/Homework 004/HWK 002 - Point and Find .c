// 編譯器：Dev C++
// 日期：2016/12/18 

#include <stdio.h>

int main(void) {
   int n,i;
   double x, y, xmin, ymin;
   
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter x, y: ");
    scanf("%lf%lf", &x, &y);
    xmin = x;
    ymin = y;
    printf("Enter x, y: ");
    scanf("%lf%lf", &x, &y);
    //比大小 
    for(i = 0;i < n; i++) {
      if (x * x + y * y < xmin * xmin + ymin * ymin) {
   	    xmin = x;
   	    ymin = y;
      }
    }
    printf("(%f, %f) is nearest to the original point.\n",  xmin, ymin);

}
