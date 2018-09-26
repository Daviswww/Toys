#include<cstdio>

int main()
{
	int x, y, z;
	printf("Enter x, y, z: ");
	scanf("%d %d %d", &x, &y, &z);
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	//AND運算為達成全部則成立 
	if(x == y && y == z)
	{
		// 1 1 1
		printf("x == y && y == z\n");
	}
	else if(x < y && y < z)
	{
		//1 2 3
		printf("x < y && y < z\n");
	}
	else if(x > y && y < z)
	{
		// 2 1 3
		printf("x > y && y < z\n");
	}
	return 0;
}
