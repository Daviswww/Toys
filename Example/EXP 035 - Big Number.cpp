#include <bits/stdc++.h>

using namespace std;

const int MXA_N = 5001;

int a[MXA_N] = {0}, b[MXA_N] = {0}, ans[MXA_N*2] = {0};
void ToInt(string A, int lenA, string B, int lenB);
void print(int str3[]);
void add(int A[], int B[]);
void sub(int A[], int B[]);
void mul(int A[], int B[]);
int main() 
{
	int n;
	string str1, str2;
	while(true)
	{
		printf("=== menu ===\n");
		printf("1.ADD\n");
		printf("2.SUB\n");
		printf("3.MUL\n");
		printf("Enter N: ");
		cin >> n;
		cin >> str1 >> str2;
		ToInt(str1, str1.size(), str2, str2.size());
		switch(n) 
		{ 
			case 1:
				printf("ADD:");	
				add(a, b);
				print(ans);
				break;
			case 2:
				printf("SUB:");	
				sub(a, b);
				print(ans);
				break;
			case 3:
				printf("MUL:");	
				mul(a, b);
				print(ans);
				break;
			default: 
				cout << "What?" << endl; 
		}
	}
	return 0;
}
void ToInt(string A, int lenA, string B, int lenB)
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
void print(int C[])
{ 
	int i = 5000;
	while(i >= 0)
	{
		if(C[i])
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
			printf("%d", C[i]);
			C[i--] = 0;
		}        	
	}
	puts("");
}
void add(int A[], int B[])
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

void sub(int A[], int B[])
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

void mul(int A[], int B[])
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
