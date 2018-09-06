#include<bits/stdc++.h>
//#include<stdio.h>
using namespace std;

int main()
{
	int n, i = 0;
	double tmp, sum = 0;
	printf("Entre N: ");
	scanf("%d", &n);
	while(i < n)
	{
		scanf("%lf", &tmp);
		sum += tmp; // sum = tmp + sum
		i++; 		// i = i + 1
	}
	printf("ензб : %lf", sum/n);
	
	return 0;
}
