//���: 106/02/14


#include <stdio.h>
#include <time.h>
#define SIZE 100


void generate_array(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) a[i] = rand() % 100 + 1;  
}
//�ü� 
void print_array(int a[], int n) {
  int i;
  for (i = 0; i < n; i++) printf("%d ", a[i]);
  puts("");
}
//�C�L 
int z(int a[], int q ,int n) {
  int i,k = 0;
  for (i = 0; i < n; i++) {
      if(q == a[i])k++;
      }
  return k;
}
//�p�⦸�� 
int main(void) {
  int a[SIZE], n ,q;

  printf("Enter n: ");
  scanf("%d", &n);
  srand(time(0));
  generate_array(a, n);
  print_array(a, n);
  
  printf("Enter the number: ");
  scanf("%d", &q);
  printf("%d appears %d times.",q , z(a, q, n));//�C�L 
  
  system("pause");
}
