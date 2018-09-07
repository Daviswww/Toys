// 學號：b10502037  姓名：何星緯
// 檔名：b10502037-xxx-x.c
// 編譯器：Dev C++
// 日期：2016/11/26 
// 參考老師範例 

#include <stdio.h>

typedef struct {
  double x, y, z;
} Vector;
//列印 
void print_vector(Vector a) {
  printf("(%f, %f, %f)", a.x, a.y, a.z);
}
//相加 
void sum_vector(Vector a,Vector b){
  double q = (a.x + b.x), w = (a.y + b.y), e = (a.z + b.z);
  printf("(%f, %f, %f)",q, w, e);
}
//相乘 
void summ_vector(Vector a,Vector b){
  double q = (a.x * b.x), w = (a.y * b.y), e = (a.z * b.z);
  printf("(%f)",q + w + e);
}
//判斷相不相等 
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
