#include<stdio.h>
#include<stdlib.h>

int main() 
{
	double n, m;
	printf("�п�J�}�l���{��:");
	scanf("%lf", &n);
	printf("�п�J�������{��:");
	scanf("%lf", &m);	
	printf("�z�@�@��i�F %.1lf �^���C�H�C�^�� 0.35 ���p�C\n", m-n);
	printf("�z���h���`�p�� $%.2lf �����C\n", (m-n)*0.35);
	return 0;
}
