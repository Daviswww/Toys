#include<bits/stdc++.h>
#define vc(n) ((n % 2 == 1) ? ((n-1)/2) : (n/2)-1)
#define cv(n) ((n % 2 == 1) ? (1) : (2))
using namespace std;

int main()
{
	FILE * fo;
	fo = fopen("OutputFile.txt","w");
	int n;
	clock_t t;
	//Start
	
	while(cin >> n)
	{
		t = clock();
		if(n % 3 == 0)
		{
			printf("%d %d %d\n", n/3, n/3, n/3);
			//fprintf(fo,"%.5d : [%.5d, %.5d, %.5d]\n", n, n/3, n/3, n/3);
		}
		else
		{
			int g = 2147483647, p;
			for(int i = cv(n), k = vc(n); i <= n/2; i+=2, k--)
			{
				if(i < k)
				{
					if(k % i == 0)
					{
						if(g > k)
						{
							g = k;
							p = i;
						}
					}						
				}
				else
				{
					if(i % k == 0)
					{
						if(g > i)
						{
							g = i;
							p = k;
						}
					}	
				}
			}
			if(p < g)
			{
				printf("%d %d %d\n", p, g, g);
				//fprintf(fo,"%.5d : [%.5d, %.5d, %.5d]\n", n, n - (g * 2), g, g);
			}
			else
			{
				printf("%d %d %d\n", g, g, p);
				//fprintf(fo,"%.5d : [%.5d, %.5d, %.5d]\n", n, g, g, n - (g * 2));
			}
		}
		t = clock() - t;
		printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
	}
	fclose (fo);
	return 0;
}
