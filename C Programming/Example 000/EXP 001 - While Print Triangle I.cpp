#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, i;
	scanf("%d", &n);
	k = n;
	/*
	@@@@@
	@@@@
	@@@
	@@
	@
	*/
	while(k)
	{
		i = k;
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
