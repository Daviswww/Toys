#include<bits/stdc++.h>

using namespace std;
/*
 �ռg�@��²�檺�{���A�����ϥΪ̿�J�G�Ӿ��(�Ʀr���H�r���j�})�A
 ���O�s�� a �� b ���ܼƤ��A��X��Ƭۥ[�B�۴�B�ۭ��M�۰������G�C 
 ����: (1)�۰��i�঳�p�ơA�]�����k�ݯ���ܥX�p�� (2)��J��ƫ��O scanf("%d,%d", &a,&b);
*/
int main()
{
	double a, b;
	printf("Enter a,b:");
	while(scanf("%lf,%lf", &a, &b) != EOF)
	{
		printf("�ۥ[: %.0lf\n", a + b);
		printf("�۴�: %.0lf\n", a - b);
		printf("�ۭ�: %.0lf\n", a * b);
		printf("�۰�: %lf\n", a / b);
		printf("Enter a,b:");
	}
	
	return 0;
} 
