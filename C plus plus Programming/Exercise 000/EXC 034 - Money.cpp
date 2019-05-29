#include<cstdio>


int main()
{
	double n, sum = 0;
	
	printf("請輸入金額: ");
	scanf("%lf", &n);
	
	for(int i = 0; i < 10; i++)
	{
		sum = n * 0.04;
		n += sum;
	}
	printf("本金加利息一共: %lf\n", n);
	
	return 0;
} 
