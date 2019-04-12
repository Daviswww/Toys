#include<cstdio>

int main()
{
	double n;

	while(scanf("%lf", &n) != EOF)
	{
		if(n > 0 ? n-(int)n > 0 : (n*-1)-((int)n*-1) > 0)
		{
			printf("眤块计%lfぃㄢ计俱计\n", n);
		}
		else if( n > 99 || n < -99 || (n > -10 && n < 10))
		{
			printf("眤块计%dぃㄢ计俱计\n", (int)n);
		}
		else
		{
			printf("眤块计%dㄢ计俱计\n", (int)n);
		}
	}

	return 0;	
} 
