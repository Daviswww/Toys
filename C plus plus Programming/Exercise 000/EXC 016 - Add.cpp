#include<bits/stdc++.h>

using namespace std;
const int maxn = 100;
const int maxm = 100;
int main()
{
	srand(time(NULL));
	int n, ary[maxn][maxm];
	printf("Enter n: ");
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			int k = (rand() % (2 * n * n)) + 2;
			ary[i][j] = k;
			printf("* ");
		}
		puts("");
	}
	int q, w, e, r;
	printf("Your picks: ");
	scanf("%d %d %d %d", &q, &w, &e, &r);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			printf("%d ", ary[i][j]);
		}
		puts("");
	}
	printf("Player's numbers: %d %d\n", ary[q-1][w-1], ary[e-1][r-1]);
	int a = rand() % n;
	int s = rand() % 4;
	int d = rand() % n;
	int f = rand() % 4;
	printf("Computer's numbers: %d %d\n", ary[a][s], ary[d][f]);
	printf("The player has %d (%d + %d) points and the computer has %d(%d + %d) points.\n", ary[q-1][w-1]+ary[e-1][r-1], ary[q-1][w-1], ary[e-1][r-1],ary[a][s]+ary[d][f], ary[a][s], ary[d][f]);
	if(ary[q-1][w-1] + ary[e-1][r-1] > ary[a][s]+ary[d][f])
	{
		printf("The player wins the game.");
	}
	else
	{
		printf("The Computer wins the game.");
	}
	return 0;	
}
