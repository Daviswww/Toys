#include<cstdio> 
#define swap(x, y) {int z; z = x; x = y; y = z;} 
const int maxn = 15;
int main()
{
	int n, ary[maxn] = {0};
	
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &ary[i]);
	}
	for(int i = 0; i < 10; i++) 
	{
		for(int j = i; j < 10; j++)
		{
			if(ary[i] < ary[j])
			{
				swap(ary[i], ary[j]);
			}
		}
	}
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", ary[i]);	
	} 
	return 0;
}
