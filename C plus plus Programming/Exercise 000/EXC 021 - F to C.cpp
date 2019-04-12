#include<stdio.h>
#include<stdlib.h>

int main() 
{
	double n;
	printf("輸入華氏溫度:");
	scanf("%lf", &n);
	printf("華氏 %.1lf 度約為攝氏 %.0lf 度", n, ((n-32)*5)/9);
	return 0;
}
