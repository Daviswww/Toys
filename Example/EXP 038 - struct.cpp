#include<iostream>
#include<cstdio>
using namespace std;

typedef struct
{
	double a, b;
} Complex; 

Complex add(Complex complexA, Complex complexB)
{
	Complex tmpA;
	tmpA.a = complexA.a + complexA.b;
	tmpA.b = complexB.a + complexB.b;
	printf("(%.0lf + %.0lfi) + (%.0lf + %.0lfi) = %.0lf + %.0lfi\n", 
	complexA.a, complexA.b, complexB.a, complexB.b, tmpA.a, tmpA.b);
}
int main()
{
	char op;
	Complex complexA ,complexB;
	
 	scanf("%lf %lf %c %lf %lf", complexA.a);
	printf("Enter the complex number expression: (");
	cin >> complexA.a >> complexB.a >> op >> complexA.b >> complexB.b;
	if(op == '+')
	{
		add(complexA ,complexB);
	}
	
	
	return 0;	
} 
