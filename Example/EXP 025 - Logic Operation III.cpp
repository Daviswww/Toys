#include<cstdio>

int main()
{
	int x, y, z;
	printf("Enter x, y, z: ");
	scanf("%d %d %d", &x, &y, &z);
	//OR�B�⬰�F���@���h���� 
	printf("x = %d, y = %d, z = %d\n", x, y, z);
	if(x == y || y == z)
	{
		// 1 2 2
		printf("x == y �� y == z\n");
	}
	else if(x < y || y < z)
	{
		//1 2 3
		printf("x < y �� y < z\n");
	}
	return 0;
}
