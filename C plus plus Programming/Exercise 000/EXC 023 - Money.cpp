#include<cstdio>
#include<cstdlib>

int main()
{
	double n, total;
	int op = 1;
	
	printf("¿é¤J­È¡G");
	scanf("%lf", &n);
	
	if(n > 4400000)
	{
		op = 5;
	}
	else if(n > 2350000)
	{
		op = 4;
	}
	else if(n > 1170000)
	{
		op = 3;
	}
	else if(n > 520000)
	{
		op = 2;
	}
	//printf("%d", op);
	switch(op)
	{
		case 1: 
				total = n * 0.05;
			break;
		case 2: 
			total = (520000*0.05)+(n-520000)*0.12;
			break;
		case 3: 
			total = (520000*0.05)+((1170000-520001)*0.12)+(n-1170000)*0.2;
			break;
		case 4: 
			total = (520000*0.05)+((1170000-520001)*0.12)+((1170000-2350000)*0.2)+(n-2350000)*0.3;
			break;
		case 5: 
			total = (520000*0.05)+((1170000-520001)*0.12)+((1170000-2350000)*0.2)+((4400000-2350000)*0.3)+(n-4400001)*0.4;
			break;
	}
	printf("¿é¥X­È¡G%.0lf", total);
	return 0;	
}

