#include<cstdio>

int main()
{
	int x, y;
	printf("Enter x, y: ");
	scanf("%d %d", &x, &y);
	printf("x = %d y = %d\n", x, y);
	//¤j¤p¹Bºâ 
	if(x == y)
	{
		printf("X = Y\n");
	}
	if(x != y)
	{
		if(x > y)
		{
			printf("X > Y\n");
		}
		else if(x < y)
		{
			printf("X < Y\n");
		}		
	}

	return 0;
}
