#include<bits/stdc++.h>

using namespace std;
const int MAXN = 1005;
const int MAXM = 6;
int main()
{
	char name[MAXN], lotto[MAXN][MAXM] = {0}, select, go;
	int n, k= 0;
	srand(time(NULL));
	do
	{
		printf("=================================================\n");
		printf("Welcome to the Happy Lottery Game!\n");
		printf("Your name: ");
		gets(name);
		printf("%s, welcome to the game!\n", name);
		do
		{
			printf("=================================================\n");
			printf("Enter the number of tickets you want to buy: ");
			scanf("%d", &n);
			getchar();
			printf("Computer or Self select (C/P)? ");
			scanf("%c", &select);
			if(select == 'P' || select == 'p')
			{
				for(int i = k; i < k+n; i++)
				{	
					printf("Select numbers: ");
					for(int j = 0; j < MAXM; j++)
					{
						int tmp;
						scanf("%d", &tmp);
						lotto[i][j] = tmp;
					}
				}
			}
			else
			{
				for(int i = k; i < k+n; i++)
				{
					printf("Select numbers:");
					for(int j = 0; j < MAXM; j++)
					{
						int tmp = rand() % 49 + 1;
						for(int w = 0; w < j; w++)
						{
							while(lotto[i][w] == tmp)
							{
								tmp = rand() % 49 + 1;
							}
						}
						lotto[i][j] = tmp;
						printf(" %d", tmp);
					}
					puts("");
				}
			}
			k += n;
			printf("-------------------------------------------------\n");
			printf("%s's Receipt:\n", name);
			printf("Total pay: %d\n", n*50);
			printf("Thanks for your playing Happy Lottery.\n");
			printf("=================================================\n");
			printf("Play more (Y/N)? ");
			getchar();
			scanf("%c", &go);
		}while(go == 'Y' || go == 'y');
		int result[MAXN] = {0}, total = 0;
		printf("The lottery result is:\n");
		for(int i = 0; i < MAXM; i++)
		{
			int tmp = rand() % 49 + 1;;
			for(int j = 0; j < i; j++)
			{
				while(result[j] == tmp)
				{
					tmp = rand() % 49 + 1;
				}
			}
			result[i] = tmp;
			printf("%d ", result[i]);
		}
		puts("");
		for(int i = 0; i < k; i++)
		{
			int star = 0;
			for(int j = 0; j < MAXM; j++)
			{
				for(int w = 0; w < MAXM; w++)
				{
					if(lotto[i][j] == result[w])
					{
						star++;
						lotto[i][j] = -1;
					}
				}
			}
			if(star == 3)
			{
				printf("%s! Congratulations! You won 3 stars.\n", name);
				total += 200;
			}
			else if(star == 4)	
			{
				printf("%s! Congratulations! You won 4 stars.\n", name);
				total += 5000;
			}
			else if(star == 5)	
			{
				printf("%s! Congratulations! You won 5 stars.\n", name);
				total += 10000000;
			}
			else if(star == 6)	
			{
				printf("%s! Congratulations! You won 6 stars.\n", name);
				total += 100000000;
			}
			else
			{
				printf("%s! Congratulations! You won %d stars.\n", name, star);
			}
		}
		printf("You spent NT $%d and won NT $%d.\n", k * 50, total);
		printf("=================================================\n");
		printf("Quit the game (Y/N)? ");
		getchar();
		scanf("%c", &go);
		getchar();
	}while(go == 'N' || go == 'n');
	printf("=================================================\n");
	printf("Thanks for playing!\n");
	return 0;
}
