// �sĶ���GDev C++
// ����G2016/10/28

#include <stdio.h>

int main(void) {
  int n, i, j, s;
  
  printf("Enter n: ");
  scanf("%d", &n);

  printf("   |");
  for (j = 1; j <= n; j++) printf("%3d", j); //�L1 2 3 4 ........... 
  puts(""); //���� 
  printf("---+"); //�C�L 
  for (j = 1; j <= n; j++) printf("---"); //�L--- 
  puts(""); //����
  
  for (i = 1; i <= n; i++, s--) {
    printf("%2d |", i);
    for (s = i; s > 1; s--) printf("   "); //�C�L�ťլO�ת� 

    for (j = i; j <= n; j++)  //J����I�M�����@���[��p��N �N�|�X��1��1��2��N���|�X�� 
	printf("%3d", i * j); //�C�L I * J ���� 
    puts("");
  }
  
 
  
  
  system("pause");
}
