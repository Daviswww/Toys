#include<bits/stdc++.h>

using namespace std;

int gcd(int , int);

int main()
{
	int a, b;
	
	while(scanf("%d/%d", &a, &b) != EOF)
	{
		int g = gcd(a, b);
		
		printf("%d/%d\n", a/g, b/g);		
	}
	
	return 0;
}
int gcd(int x, int y)
{
	int tmp = y;
	while(1)
	{
		if(x % tmp)
		{
			tmp = x % y;
			x = y;
			y = tmp;
		}
		else
		{
			break;
		}
	}
	return y;	
}
