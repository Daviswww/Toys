#include<stdio.h>
void kitty(int);
int main()
{
	int n;
	while(scanf("%d", &n)!=EOF)
	{
		if(n > 2 && n < 10)
		{
			kitty(n);	
		}
		else
		{
			printf("�W�L���d��!!\n");
		}		
	}		
	return 0;
} 

void kitty(int k)
{
	for(int i = 0; i < k; i++)
	{
		printf("Hello Kitty\n");
	}
} 
