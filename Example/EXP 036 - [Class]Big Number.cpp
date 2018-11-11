#include <bits/stdc++.h>

using namespace std;
const int MXA_N = 5001;

class BigOperation
{
private:
	int *A, *B, *ans;
public:
	BigOperation(int a[], int b[], int ans[])
	{
		this->A = a;
		this->B = b;
		this->ans = ans;
	}
	void print();
	void add();
	void sub();
	void mul();
};
void ToInt(int a[], int b[], string strA, int lenA, string strB, int lenB);
int main() 
{
	int n;
	int a[MXA_N] = {0}, b[MXA_N] = {0}, ans[MXA_N*2] = {0};
	string str1, str2;
	BigOperation BO(a, b, ans);
	while(true)
	{
		printf("=== menu ===\n");
		printf("1.ADD\n");
		printf("2.SUB\n");
		printf("3.MUL\n");
		printf("Enter N: ");
		
		cin >> n;
		printf("Number1: ");
		cin >> str1;
		printf("Number2: ");
		cin >> str2;
		ToInt(a, b, str1, str1.size(), str2, str2.size());
		
		switch(n) 
		{ 
			case 1:
				printf("ADD:");	
				BO.add();
				BO.print();
				break;
			case 2:
				printf("SUB:");	
				BO.sub();
				BO.print();
				break;
			case 3:
				printf("MUL:");	
				BO.mul();
				BO.print();
				break;
			default: 
				cout << "What?" << endl; 
		}
	}
	return 0;
}
void ToInt(int a[], int b[], string A, int lenA, string B, int lenB)
{
	for(int k = 0, i = lenA-1; i >= 0; k++, i--)
	{
		a[k] = A[i] - '0';
	}
	
	for(int k = 0, i = lenB-1; i >= 0; k++, i--)
	{
		b[k] = B[i] - '0';
	}
}
void BigOperation::print()
{ 
	int i = 5000;
	while(i >= 0)
	{
		if(ans[i])
		{
			break;
		}
		i--;
	}
	if( i == -1)
	{
		printf("0");
	}
    else
    {
		while(i >= 0)
		{
			printf("%d", ans[i]);
			ans[i--] = 0;
		}        	
	}
	puts("");
}
void BigOperation::add()
{
    for(int j = 0; j < 5001; j++)
	{
        ans[j] += A[j] + B[j];
    }
    for(int j = 0; j < 5001; j++)
	{
        ans[j+1] += ans[j]/10;
        ans[j] %= 10;			
	}
}

void BigOperation::sub()
{
    for(int j = 0; j < 5001; j++)
	{
		if(A[j] < B[j])
		{
			A[j+1]--;
			A[j] += 10;
		}
        ans[j] += A[j] - B[j];
    }
    for(int j = 0; j < 5001; j++)
	{
        ans[j+1] += ans[j]/10;
        ans[j] %= 10;			
	}
}

void BigOperation::mul()
{
	for(int i = 0; i < 5001; i++)
	{
	    for(int j = 0; j < 5001; j++)
		{
	        ans[j+i] += A[j] * B[i];
	    }
	    for(int j = 0; j < 5001; j++)
		{
	        ans[j+1] += ans[j]/10;
	        ans[j] %= 10;
		}
	}
}
