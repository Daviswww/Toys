#include<stdio.h>
#include<stdlib.h>

int main() 
{
	double n, m;
	printf("請輸入開始里程數:");
	scanf("%lf", &n);
	printf("請輸入結束里程數:");
	scanf("%lf", &m);	
	printf("您一共行進了 %.1lf 英哩。以每英哩 0.35 元計。\n", m-n);
	printf("您的退款總計為 $%.2lf 美金。\n", (m-n)*0.35);
	return 0;
}
