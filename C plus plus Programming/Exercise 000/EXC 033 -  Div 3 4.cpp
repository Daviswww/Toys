#include<cstdio>

const int n = 500;
int main()
{
	int ans = 0;
	
	printf("可被4與7整除，但不能被3整除的數: ");
	for(int i = 100; i <= n; i++)
	{
		if(i % 4 == 0 && i % 7 == 0 && i % 3 != 0)
		{
			printf("%d ", i);
			ans+= i;
		}
	}
	printf("\n總和: %d\n", ans);
	
	return 0;	
} 
