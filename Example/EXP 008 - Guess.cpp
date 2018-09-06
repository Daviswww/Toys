#include<bits/stdc++.h>
//#include<stdio.h>
//#include<time.h>
//#include<math.h>

using namespace std;

int main()
{
	int n, k;
	srand (time(NULL));
	k = rand() % 100 + 1;
	while(true)
	{
		printf("Guess : ");
		scanf("%d", &n);
		if(n == k)
		{
			printf("Correct!\n");
			break;
		}
		else if(n > k)
		{
			printf("Too big!\n");
		}
		else if(n < k)
		{
			printf("Too small!\n");
		}
	}
	return 0;
}
 
