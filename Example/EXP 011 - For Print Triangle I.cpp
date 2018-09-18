#include<bits/stdc++.h>

using namespace std;
 
int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n-i; j++)
		{
			printf("*");
		}
		for(int j = n-i; j <= n; j++)
		{
			printf("@");
		}
		for(int j = n-i; j < n; j++)
		{
			printf("@");
		}
		for(int j = 0; j < n-i; j++)
		{
			printf("*");
		}
		puts("");
	}
	return 0;
} 
