#include<cstdio>

const int n = 500;
int main()
{
	int ans = 0;
	
	printf("�i�Q4�P7�㰣�A������Q3�㰣����: ");
	for(int i = 100; i <= n; i++)
	{
		if(i % 4 == 0 && i % 7 == 0 && i % 3 != 0)
		{
			printf("%d ", i);
			ans+= i;
		}
	}
	printf("\n�`�M: %d\n", ans);
	
	return 0;	
} 
