#include<cstdio>

int main()
{
	double n;

	while(scanf("%lf", &n) != EOF)
	{
		if(n > 0 ? n-(int)n > 0 : (n*-1)-((int)n*-1) > 0)
		{
			printf("�z��J���Ʀr%lf�����@�Ө��ƾ��\n", n);
		}
		else if( n > 99 || n < -99 || (n > -10 && n < 10))
		{
			printf("�z��J���Ʀr%d�����@�Ө��ƾ��\n", (int)n);
		}
		else
		{
			printf("�z��J���Ʀr%d���@�Ө��ƾ��\n", (int)n);
		}
	}

	return 0;	
} 
