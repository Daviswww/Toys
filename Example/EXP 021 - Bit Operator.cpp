#include <bits/stdc++.h>

using namespace std;

int main()
{
	unsigned int a = 60;      // 60 = 0011 1100  
	unsigned int b = 13;      // 13 = 0000 1101
	int c = 0;           
	// 12 = 0000 1100
	c = a & b;     
	printf("A & B = %d\n", c);
	
	// 61 = 0011 1101
	c = a | b;        
	printf("A | B = %d\n", c);
	
	// 49 = 0011 0001
	c = a ^ b;            
	printf("A ^ B = %d\n", c);
	
	// -61 = 1100 0011
	c = ~a;                
	printf("~A = %d\n", c);
	
	// 240 = 1111 0000
	c = a << 2;            
	printf("A << 2 = %d\n", c);
	
	// 15 = 0000 1111
	c = a >> 2;            
	printf("A >> 2 = %d\n", c);
	
	return 0;
}
