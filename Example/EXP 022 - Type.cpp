#include<cstdio>

int main()
{
	//-2147483648 ~ 2147483647
	int q = 10;
	printf("int =  %d\n", q);
	
	//10^-38~10^38
	float w = 10.5;
	printf("float = %f\n", w);
	
	//10^-38~10^38
	double e = 10;
	printf("double = %lf\n", e);
	
	//-128 ~ 127
	char r = 'C';
	printf("char = %c\n", r);	
	
	return 0;	
} 
