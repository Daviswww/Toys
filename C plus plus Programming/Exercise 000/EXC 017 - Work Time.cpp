#include<cstdio>
#include<cstdlib>

int main()
{
	double n, total;
	int op = 1;
	
	printf("請輸入工讀生的工作時數: ");
	scanf("%lf", &n);
	
	if(n > 75)
	{
		op = 3;
	}
	else if(n > 60)
	{
		op = 2;
	}
	//printf("%d", op);
	switch(op)
	{
		case 1: 
			total = n * 110;
			break;
		case 2: 
			total = (60*110)+((n-60)*110*1.25);
			break;
		case 3: 
			total = (60*110)+(15*110*1.25)+((n-75)*110*1.75);
			break;
	}
	printf("薪水為: %.0lf", total);
	return 0;	
}

