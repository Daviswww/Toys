#include<bits/stdc++.h>
//#include<stdio.h>
using namespace std;

int main()
{
	int n;
	printf("How old are you : ");
	scanf("%d", &n);
	if(n >= 18 && n < 65)
	{
		printf("Young\n");
	}
	else if( n >= 65)
	{
		printf("Old\n");
	}
	else if(n < 0 || n > 150)
	{
		printf("You are not human!\n");
	}
	else 
	{
		printf("Child\n");
	}
	
	return 0;
} 
