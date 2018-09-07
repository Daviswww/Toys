// 編譯器：Dev C++
// 日期：2016/09/29

#include <stdio.h>

int main(void) {
  double a, b, c, d, e, f, g; // (a, b) (c, d)
  
  printf("Enter a, b, c, d: ");
  scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
  if (a == b  || c == d) {
  	printf("The line cannot be formed.\n");
}// end if
  else {
    printf("a = %lf, b = %lf, c = %lf, d = %lf\n", a, b, c, d);
    // (b - d)x + (c - a)y = a(b - d) + b(c - a) // 求直線方程式  
    e = b - d;
    f = c - a;
    g = (a * e) + (b * f);
    printf("%lf x + %lf y = %lf",e ,f ,g);
}// end else
  system("pause");
}
