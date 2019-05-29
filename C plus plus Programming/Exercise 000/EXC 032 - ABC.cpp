#include<cstdio>

int main()
{
	int n, a = 0, b = 0, c = 0;
	printf("請輸入10個成績: ");
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &n);
		if(n >= 0 && n < 60)
		{
			c++;
		}
		else if(n > 75)
		{
			a++;
		}
		else
		{
			b++;
		}
	}
	printf("A: %d\nB: %d\nC: %d\n", a, b, c);
	return 0;
}
