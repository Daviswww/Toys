// �Ǹ��Gb10502037  �m�W�G��P�n
// �ɦW�Gb10502037-xxx-x.c
// �sĶ���GDev C++
// ����G2016/11/26 
// �ѦҦѮv�d�� 

#include <stdio.h>

typedef struct {
  double x, y, z;
} Vector;
//�C�L 
void print_vector(Vector a) {
  printf("(%f, %f, %f)", a.x, a.y, a.z);
}
//�ۥ[ 
void sum_vector(Vector a,Vector b){
  double q = (a.x + b.x), w = (a.y + b.y), e = (a.z + b.z);
  printf("(%f, %f, %f)",q, w, e);
}
//�ۭ� 
void summ_vector(Vector a,Vector b){
  double q = (a.x * b.x), w = (a.y * b.y), e = (a.z * b.z);
  printf("(%f)",q + w + e);
}
//�P�_�ۤ��۵� 
void summm_vector(Vector a,Vector b){
  if(a.x == b.x && a.y == b.y && a.z == b.z) printf(" == ");
  else printf(" != ");
}

int main(void) {
   Vector a, b;
   
   printf("Enter two vectors: ");
   scanf("%lf%lf%lf%lf%lf%lf", &a.x, &a.y, &a.z, &b.x, &b.y, &b.z);
   print_vector(a);
   printf(" + ");
   print_vector(b);
   printf(" = ");
   sum_vector(a,b); 
   puts("");
   
   print_vector(a);
   printf(" . ");
   print_vector(b);
   printf(" = ");
   summ_vector(a,b); 
   puts("");
   
   print_vector(a);
   summm_vector(a,b);
   print_vector(b);
   puts("");
   
   system("pause");
}
