// �sĶ���GDev C++
// ����G2016/12/22 

#include <stdio.h>

void a(double *x, double *y) { 
  double sum = 0,sumt = 0;
  sum = *x + *y; //�ۥ[ 
  printf("Integer part sum: %.0f\n", sum);
  sumt = (*x + *y) - floor(sum);//�ۥ[���� 
  printf("Fraction part sumt: %.2f\n", sumt);
}
int main(void) {
  double x, y;
  
  printf(" Enter two numbers: ");
  scanf("%lf%lf", &x, &y);

  a(&x, &y); 

  system("pause");
}
