#include <stdio.h>
#include <stdlib.h>
int main()
{
	double a ,b ,c;
	
	printf("期中考: ");
	scanf("%lf", &a);
	printf("期末考: ");
	scanf("%lf", &b);
	printf("平時成績: ");
	scanf("%lf", &c);
	printf("修改前 -> \n期中考: %lf\n期末考: %lf\n平時成績: %lf\n", a, b, c);
	printf("修改後 -> \n期中考: %lf\n期末考: %lf\n平時成績: %lf\n", a*0.3, b*0.3, c*0.4);
	printf("總成績為: %lf", a*0.3+b*0.3+c*0.4);
	
	return 0;
}
