#include <bits/stdc++.h>

using namespace std;
const int MAXN = 1000;
int main()
{
	FILE * fo;
	fo = fopen("TestNum.txt","w");
	
	char a[MAXN], b[MAXN];
	srand(time(NULL));
	for(int i = 0; i < MAXN; i++)
	{
		int tmp = rand() % 10 + 1;
		fprintf(fo,"%d", tmp);
	}
	fprintf(fo,"\n");
	for(int i = 0; i < MAXN; i++)
	{
		int tmp = rand() % 10 + 1;
		fprintf(fo,"%d", tmp);
	}
	fprintf(fo,"\n");
	fclose (fo);
	return 0;
}
