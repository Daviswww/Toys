#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	while(true)
	{
		int ans = 0;
		printf("Enter the range (0~9999)");
		scanf("%d %d", &n, &m);		
		for(int i = n; i <= m; i++)
		{
			int sum = i;
			while(true)
			{
				if(sum == 0) break;
				if(sum % 10 == 4)
				{
					ans++;
					break;
				}
				else
				{
					sum /= 10;
				}
			}
		}
		printf("There is %d plates without 4 in this range.\n", (m-n)-ans+1);
	}
	return 0;
}
