// 編譯器：Dev C++
// 日期：2016/11/26 

#include <stdio.h>
/*
1 2 0 -3 0 1
y(1) = 1.3790930824
The roots are -1.1803035 and 0.8398034.
*/

//創建一個傳遞a，b，c，d，e和x的函數，並返回ax3 + bx2 + cx + dcos（x）+ e的值。
//F(X)  
double k(int x,int a,int b,int c,int d,int e) {
  double sum= 0;
  sum = (a * pow(x,3) ) + ( b * pow(x,2) ) + (c * x)+ (d * cos(x)) + e;
  return sum;
}
/*F'(X) 

double l(int x,int a,int b,int c,int d) {
  double summ= 0;
  summ = (3 * a * pow(x,2) ) + (2 * b * x ) + c + (d * -sin(x));
  return summ;
}
*/ 
int main(void) {
  double sum = 0,q = 0,w = 0,ss = 0,qq = 1,ww = 0,ee = 0,x = 0;
  int a,b,c,d,e;
  printf("Read ax^3 + bx^2 + cx + dcos(x) + e and x: ");
  scanf("%d%d%d%d%d%lf", &a,&b,&c,&d,&e,&x);
  printf("The equation is y(x) = %dx^3 + %dfx^2 + %dfx + %dfcos(x)+ %.4f.\n",a,b,c,d,e);
  sum = k(x,a,b,c,d,e);//我把它給化簡了一下 
  printf("y(%.0f) = %.10f\n",x,sum);
  //使用Newton-Raphson方法來找到方程ax3 + bx2 + cx + dcos（x）+ e = 0的所有實根。
	x = -x;//負 
	while(fabs(qq) > 0.000000001) {
	  	qq = (a * pow(x,3) ) + ( b * pow(x,2) ) + (c * x)+ (d * cos(x)) + e;//F(X) 
	  	ww =(3 * a * pow(x,2) ) + (2 * b * x ) + c + (d * -sin(x));//F'(X) 
	  	x = x - (qq/ww);//一個帶入的概念
	}
	printf("The roots are %.7f ",x);
	
	x = -x;//正 
	qq = 2;
	while(qq > 0.0000001) {
	qq = (a * pow(x,3) ) + ( b * pow(x,2) ) + (c * x)+ (d * cos(x)) + e;
	ww =(3 * a * pow(x,2) ) + (2 * b * x ) + c + (d * -sin(x));
	x = x - (qq/ww);
	}
	printf("and %.7f ",x);
}
