#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, i;
	cin >> n;
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
			cout << "@";
			i--;
		}
		puts("");
		k--;
	}
	return 0;	
} 
