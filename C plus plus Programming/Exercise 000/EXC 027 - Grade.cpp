#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a ,b ,c;
	
	printf("������: ");
	scanf("%lf", &a);
	printf("������: ");
	scanf("%lf", &b);
	printf("���ɦ��Z: ");
	scanf("%lf", &c);
	printf("�ק�e -> \n������: %lf\n������: %lf\n���ɦ��Z: %lf\n", a, b, c);
	printf("�ק�� -> \n������: %lf\n������: %lf\n���ɦ��Z: %lf\n", a*0.3, b*0.3, c*0.4);
	printf("�`���Z��: %lf", a*0.3+b*0.3+c*0.4);
	
	return 0;
}
