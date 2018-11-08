#include<bits/stdc++.h>

using namespace std;

double Lv1(int);
double Lv2(int);

int main()
{
	int n;
	printf("Enter n:");
	while(scanf("%d", &n) != EOF)
	{
		double sum = 0;
		
		for(int i = 1; i <= n; i++)
		{
			sum += Lv1(i) / Lv2(i);
		}
		printf("%.20lf\n", sum);
		printf("Enter n:");
	}
	return 0;
}

double Lv1(int n)
{
	int ans1 = 0;
	for(int i = 1; i <= n; i++)
	{
		ans1 += pow(i, 2);
	}
	return ans1;
}

double Lv2(int n)
{
	int ans2 = 1;
	for(int i = 1; i <= n; i++)
	{
		ans2 *= i;
	}
	return ans2;
}
