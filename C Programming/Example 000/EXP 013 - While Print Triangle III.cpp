#include<stdio.h>

int main()
{
	int n, k, i;
	scanf("%d", &n);
	k = n;
	while(k)
	{
		i = k;
		while(i)
		{
			printf("*");
			i--;
		}
		i = n - k + 1;
		while(i)
		{
			printf("@");
			i--;
		}
		puts("");
		k--;
	}
	return 0;	
} 
