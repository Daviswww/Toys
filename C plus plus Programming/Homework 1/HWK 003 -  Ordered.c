// 編譯器：Dev C++
// 日期：2017/03/04


#include <stdio.h>

typedef struct {
  double x, y;
} Complex;

//加法 
Complex q(Complex a, Complex b) {
  Complex c;
  c.x = a.x + b.x;
  c.y = a.y + b.y;
  return c;
}

//減法 
Complex w(Complex a, Complex b) {
  Complex c;
  c.x = a.x - b.x;
  c.y = a.y - b.y;
  return c;
}

//乘法 
Complex e(Complex a, Complex b) {
  Complex c;
  c.x = a.x * b.x - (a.y * b.y);
  c.y = a.x * b.y + a.y * b.x;
  return c;
}

//除法 
Complex r(Complex a, Complex b) {
  Complex c;
  //((ac + bd) + (bc - ad)i)/(c2 + d2)
  c.x = (a.x * b.x + a.y * b.y) / (b.x * b.x + b.y * b.y);
  c.y = (a.y * b.x - a.x * b.y) / (b.x * b.x + b.y * b.y);
  return c;
}

int main(void) {
  Complex a, b, c;
  char op;
  int i;
  
  for(i = 0; i < 6; i++) {
  	printf("Enter the complex number expression: ");
    scanf("(%lf + %lfi) %c (%lf + %lfi)", &a.x, &a.y, &op, &b.x, &b.y);
    getchar();
    if(op == '+') c = q(a, b);
    if(op == '-') c = w(a, b);
    if(op == '*') c = e(a, b);
    if(op == '/'&& b.x != 0 && b.y != 0) {
      c = r(a, b);
	  printf("(%.0f + %.0fi) %c (%.0f + %.0fi) = (%.2f + %.2fi)\n", a.x, a.y, op, b.x, b.y, c.x, c.y);
	  continue;
	}
      else if(op == '/' && b.x == 0 && b.y == 0) {
      printf("(%.0f + %.0fi) %c (%.0f + %.0fi) is undefined.\n", a.x, a.y, op, b.x, b.y);
	  continue;
	  }
	  
	printf("(%.0f + %.0fi) %c (%.0f + %.0fi) = (%.0f + %.0fi)", a.x, a.y, op, b.x, b.y, c.x, c.y);
    puts("");
  }
  
  system("pause");
}
