#include<cstdio>
#include<cstdlib>

int main()
{
	int day;
	printf("Enter days: ");
	scanf("%d", &day);
	printf("%d days are %d weeks, %d days.\n", day, day/7, day%7);
	return 0;	
} 
