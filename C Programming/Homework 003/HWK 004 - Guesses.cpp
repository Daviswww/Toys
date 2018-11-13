#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n, risk, total = 0, num, t = 0;
	char op;
	srand(time(NULL));
	while(true)
	{
		printf("==========================================================\n");
		printf("Guesses Choices: \n");
		printf("O-Odd E-Even L-Low M-Medium H-High N-Number\n");
		printf("==========================================================\n");
		printf("Enter your choice: ");
		scanf("%c", &op);
		printf("Point at risk: ");
		scanf("%d", &risk);
		t++;
		int dice = rand() % 12 +1;
		printf("The winning number is %d.\n", dice);
		switch (op)
		{
			case 'O':
			case 'o':
				if(dice %2 == 1)
				{
					printf("You won %d points. \n", risk * 2);
					total += risk * 2;
				}
				else
				{
					printf("You lost %d points.\n", risk);
					total -= risk;
				}
				break;
			case 'E':
			case 'e':
				if(dice % 2 == 0)
				{
					printf("You won %d points. \n", risk * 2);
					total += risk * 2;
				}
				else
				{
					printf("You lost %d points.\n", risk);
					total -= risk;
				}
				break;
			case 'L':
			case 'l':
				if(dice <= 4)
				{
					printf("You won %d points. \n", risk * 3);
					total += risk * 3;
				}
				else
				{
					printf("You lost %d points.\n", risk);
					total -= risk;
				}
				break;
			case 'M':
			case 'm':
				if(dice > 4 && dice < 9)
				{
					printf("You won %d points. \n", risk * 3);
					total += risk * 3;
				}
				else
				{
					printf("You lost %d points.\n", risk);
					total -= risk;
				}
				break;
			case 'H':
			case 'h':
				if(dice >= 9)
				{
					printf("You won %d points. \n", risk * 3);
					total += risk * 3;
				}
				else
				{
					printf("You lost %d points.\n", risk);
					total -= risk;
				}
				break;
			case 'N':
			case 'n':
				if(num == dice)
				{
					printf("You won %d points. \n", risk * 10);
					total += risk * 10;
				}
				else
				{
					printf("You lost %d points.\n", risk);
					total -= risk;
				}
				break;
			default:
				printf("Try again!\n");
				continue;
    	}
    	printf("Continue (Y/N)?");
    	getchar();
    	scanf("%c", &op);
		if(op == 'N' || op == 'n')
		{
			break;
		}
		getchar();
	}
	printf("==========================================================\n");
	printf("Total number of guesses: %d\n", t);
	printf("Your current point: %d", total);
	return 0;
}
