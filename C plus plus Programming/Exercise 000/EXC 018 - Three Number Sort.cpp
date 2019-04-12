#include<cstdio>
#include<cstdlib>

int main()
{
	int n, m, k;
	
	printf("Enter three numbers: ");
	scanf("%d", &n);
	int maxNum = n, minNum = n, total = 0;
	scanf("%d %d", &m, &k);
	total = n + m + k;
	if(m > maxNum)
	{
		maxNum = m;
	}
	else if(m < minNum)
	{
		minNum = m;
	}
	if(k > maxNum)
	{
		maxNum = k;
	}
	else if(k < minNum)
	{
		minNum = k;
	}
	printf("%d %d %d\n", minNum, total-(minNum + maxNum), maxNum);
	return 0;
} 
