#include<bits/stdc++.h>

using namespace std;

int main()
{
	double a, b, d;
	printf("Enter a, b, d: ");
	scanf("%lf %lf %lf", &a ,&b, &d);
	printf("                                        Y-axis\n");
	printf("       0    0.5  1.0  1.5  2.0  2.5  3.0  3.5  4.0  4.5  5.0  6.0  6.5  7.0  7.5 \n");
	printf(" X-axis+-----+----+----+----+----+----+----+----+----+----+----+----+----+----+\n");
	int x;
	for(double i = a; i <= b; i+= 0.5)
	{
		x = (sin(i) + sqrt(i)) *10;
		printf("% 5.1lf  +", i);
		for(int j = 0; j < x; j++)
		{
			printf(" ");
		}
		printf("*\n");
		x = (sin(i+0.25) + sqrt(i+0.25)) *10;
		printf("       |");
		for(int j = 0; j < x; j++)
		{
			printf(" ");
		}
		printf("*\n");
	}
	return 0;
}

