#include<bits/stdc++.h>
//#include<stdio.h>
using namespace std;

int main()
{
	double a, b, c, sum = 0;
	printf("國文 : ");
	scanf("%lf", &a);
	printf("英文 : "); 
	scanf("%lf", &b);
	printf("數學 : ");
	scanf("%lf", &c); 
	sum = a + b + c;
	printf("平均 : %lf", sum/3);
	
	return 0;
}
