#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cmath>
const int maxn = 10;
const int maxm = 100;
int main()
{
	int ary[maxn] = {0}, n, ar[maxn] = {0}, ans = 0, at[maxm]={0};
	srand (time(NULL));
	printf("請輸入六個號碼: ");
	for(int i = 0; i < 6; i++)
	{
		scanf("%d", &ar[i]);	
	}
	for(int cas = 0; cas < 1; cas++)
	{
		for(int i = 0; i < 6; i++)
		{
			int tmp = rand() % 49 + 1;
			for(int j = 0; j < i; j++)
			{
				if(tmp == ary[j])
				{
					--i;
					continue;
				}
			}
			ary[i] = tmp;
		}
		printf("Case#%d: ", cas+1);
		for(int i = 0; i < 6; i++)
		{
			printf("%d ", ary[i]);
			for(int j = 0; j < 6; j++)
			{
				if(ar[j] == ary[i])
				{
					at[ar[j]]++;
				}	
			} 
		}
		puts("");
	}
	for(int i = 0; i < maxm; i++)
	{
		if(at[i])
		{
			ans++;
		}	
	} 
	printf("共猜中了 %d 個號碼，猜中號碼為: ", ans);
	for(int i = 0; i < maxm; i++)
	{
		if(at[i])
		{
			printf("%d ", i);
		}	
	} 
	
	return 0;
}
