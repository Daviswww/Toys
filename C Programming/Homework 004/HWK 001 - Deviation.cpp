#include<bits/stdc++.h>
//HWK 001 - Deviation
using namespace std;
const int MAXN = 105;
int a[MAXN] = {0}, tmp[MAXN] = {0};
void PrintArray(int n);
void MaxNumber(int n);
void MinNumber(int n);
void Deviation(int n);
void View(int n);
int main()
{
	int n;
	printf("Enter n: ");
	scanf("%d", &n);
	printf("An array of %d random numbers in the range of 1 to 1000 has been generated as follows:\n", n);
	srand(time(NULL));
	double sum = 0;
	for(int j= 0, i= 1; i <= n; i++, j++)
	{
		tmp[i] = rand() % 1000 + 1;
	}
	PrintArray(n);
	sort(tmp, tmp+n+1);
	MaxNumber(n);
	MinNumber(n);
	Deviation(n);
	for(int i = 1; i <= n; i++)
	{
		if(tmp[i] >= 0 && tmp[i] < 100)
		{
			a[0]++;
		}
		else if(tmp[i] >= 100 && tmp[i] < 200)
		{
			a[1]++;
		}
		else if(tmp[i] >= 200 && tmp[i] < 300)
		{
			a[2]++;
		}
		else if(tmp[i] >= 300 && tmp[i] < 400)
		{
			a[3]++;
		} 
		else if(tmp[i] >= 400 && tmp[i] < 500)
		{
			a[4]++;
		}
		else if(tmp[i] >= 500 && tmp[i] < 600)
		{
			a[5]++;
		}
		else if(tmp[i] >= 600 && tmp[i] < 700)
		{
			a[6]++;
		}
		else if(tmp[i] >= 700 && tmp[i] < 800)
		{
			a[7]++;
		}
		else if(tmp[i] >= 800 && tmp[i] < 900)
		{
			a[8]++;
		}
		else if(tmp[i] >= 900 && tmp[i] <= 1000)
		{
			a[9]++;
		}
	}
	View(n);
	return 0;
}

void PrintArray(int n)
{
	for(int i = 1, j = 1; i <= n; i++, j++)
	{
		printf("%5d", tmp[i]);
		if(j == 10)
		{
			puts("");
			j %= 10;
		}
	}
}

void MaxNumber(int n)
{
	printf("The maximum value is %4d.\n", tmp[n]); 
}
void MinNumber(int n)
{
	printf("The minimum value is %4d.\n", tmp[1]);
}
void Deviation(int n)
{
	double sum = 0, md = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += tmp[i];
	}
	sum /= n;
	for(int i = 1; i <= n; i++)
	{
		md += abs(tmp[i] - sum);
	}
	printf("The mean deviation is %4.6lf.\n", md/n);
}
void View(int n)
{
	int q = 0, w = 9;
	printf("The value distributes are shown as follows:\n");
	printf("   Range     Count\n");
	for(int i = 0; i < 10; i++)
	{
		printf("%3d - %3d", q, w);
		if(q == 80)
		{
			q+=10, w+=11;
		}
		else
		{
			q+=10, w+= 10;
		}
		printf(" %6d ", a[i]);
		for(int j = 0; j < a[i]; j++)
		{
			printf("*");
		}
		puts("");
	}
}
