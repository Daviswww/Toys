#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<cmath>
const int maxn = 10;
int main()
{
	int ary[maxn] = {0};
	srand (time(NULL));
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
	printf("¤j¼Ö³z¸¹½X: ");
	for(int i = 0; i < 6; i++)
	{
		printf("%d ", ary[i]);
	}
	
	return 0;
}
