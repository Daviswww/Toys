#include<bits/stdc++.h>

using namespace std;

int main()
{
	char str[1000];
	fgets(str, 100, stdin);
	for(int i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	
	gets(str);
	for(int i = 0; str[i] != '\0'; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
} 
