#include<stdio.h>
#include<stdlib.h>

int main() 
{
	double n;
	printf("��J�ؤ�ū�:");
	scanf("%lf", &n);
	printf("�ؤ� %.1lf �׬������ %.0lf ��", n, ((n-32)*5)/9);
	return 0;
}
