#include<cstdio>


int main()
{
	double n, sum = 0;
	
	printf("�п�J���B: ");
	scanf("%lf", &n);
	
	for(int i = 0; i < 10; i++)
	{
		sum = n * 0.04;
		n += sum;
	}
	printf("�����[�Q���@�@: %lf\n", n);
	
	return 0;
} 
