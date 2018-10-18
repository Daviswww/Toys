#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	while(true)
	{
		printf("Enter n: ");
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
		{
			for(int j = i; j < n-1; j++)
			{
				printf(" ");
			}
			printf("%d", n-i);
			for(int j = n-i; j <= n-1; j++)
			{
				printf(" ");
			}
			for(int j = n-i; j <= n-2; j++)
			{
				printf(" ");
			}
			if(i != 0)
			{
				printf("%d", n-i);
			} 
			puts("");
		}
		for(int i = n-2; i >= 0; i--)
		{
			for(int j = i; j < n-1; j++)
			{
				printf(" ");
			}
			printf("%d", n-i);
			for(int j = n-i; j <= n-1; j++)
			{
				printf(" ");
			}
			for(int j = n-i; j <= n-2; j++)
			{
				printf(" ");
			}
			if(i != 0)
			{
				printf("%d", n-i);
			} 
			puts("");
		}
	}
	return 0;
}

