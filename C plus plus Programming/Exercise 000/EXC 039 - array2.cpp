#include<cstdio> 
#define max(x, y) x > y ? x : y
#define min(x, y) x < y ? x : y
const int maxn = 15;
int main()
{
	int n, ary[maxn] = {0}, total = 0;
	
	for(int i = 0; i < 10; i++)
	{
		scanf("%d", &ary[i]);
		total += ary[i]; 
	}
	int a = ary[0], b = ary[0], c = 0;
	for(int i = 0; i< 10; i++)
	{
		a = max(a, ary[i]);
		b = min(b, ary[i]);
		if(ary[i] < (double)total/10)
		{
			c++;	
		}
	}
	printf("�`�~�Z:%d\n�����~�Z:%d\n�̰��~�Z:%d\n�̧C�~�Z:%d\n�C�󥭧��~�Z���~�ȭ��H��:%d", total, total/10, a, b, c);
	return 0;
}
