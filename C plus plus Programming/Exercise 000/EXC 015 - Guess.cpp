#include<bits/stdc++.h>

using namespace std;
const int maxn = 5005;
int main()
{
	int n, fs[maxn] = {0}, sc[maxn] = {0}, wtf1 = 0, wtf2 = 0;
	printf("Enter the number of terms and coefficients of first polyomial: ");
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		fs[y] = x;
		wtf1 = max(wtf1, y);
	}
	printf("Enter the number of terms and coefficients of second polyomial: ");
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		int x, y;
		cin >> x >> y;
		sc[y] = x;
		wtf2 = max(wtf2, y);
	}
	printf("The first polynomial: ");
	for(int i = wtf1; i >= 0 ; i--)
	{
		if(i == 0)
		{
			printf("%d", fs[i]);
		}
		else if(fs[i] != 0)
		{
			printf("%dX^%d", fs[i], i);
		}
	}
	printf("\nThe second polynomial: ");
	for(int i = wtf2; i >= 0 ; i--)
	{
		if(i == 0)
		{
			printf("%d", sc[i]);
		}
		else if(sc[i] != 0)
		{
			printf("%dX^%d", sc[i], i);
		}
	}
	puts("");
	printf("The addition of two polynomials: ");
	for(int i = wtf2; i >= 0 ; i--)
	{
		if(i == 0)
		{
			printf("%d", sc[i] + fs[i]);
		}
		else if(sc[i] != 0 || fs[i] != 0)
		{
			printf("%dX^%d + ", sc[i] + fs[i], i);
		}
	}
	return 0;
}
