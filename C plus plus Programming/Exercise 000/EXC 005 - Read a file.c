// �sĶ���GDev C++
// ����G2017/03/16 

#include <stdio.h>
#define LEN 80

int main(void) {
  char name[LEN];
  FILE *fp;
  int a, b, c;
  char op, e;
  double z;
  
  printf("Enter the name file: ");
  scanf("%s", name);
  
  if ((fp = fopen(name, "r")) == NULL) printf("%s cannot be opened.\n", name);
  else { 
    while(!feof(fp) && fscanf(fp,"%d %c %d %c", &a, &op, &b, &e) > 0) {
      //�P�_�Ÿ��i��B�� 
      if(op == '+') c = a + b;
      if(op == '*') c = a * b;
      if(op == '-') c = a - b;
      if(op == '%') c = a % b;
      if(op == '/') {
        z = (double)a / b;//�j���ഫ��� 
        printf("%d %c %d %c %.1f\n", a, op, b, e, z);//�C�L 
        continue;//���Y�}�l 
        }
      printf("%d %c %d %c %d\n", a, op, b, e, c);
     }
    fclose(fp);	
  }
  system("pause");
}
