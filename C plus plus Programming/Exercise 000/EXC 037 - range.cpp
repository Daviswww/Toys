#include<stdio.h>
void num(int);
int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		if(n > 9 && n <= 100)
		{
			num(n);	
		}
		else
		{
			printf("¶W¹L¦¹½d³ò!!!\n");
		}		
	}		
	return 0;
} 

void num(int m)
{
	int tmp = 2;
	printf("1 ");
	while(tmp <= m)
	{
		if(m%tmp==0)
		{
			printf("%d ", tmp);
		}
		tmp++;
	}
	puts("");
} 
