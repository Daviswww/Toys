#include<bits/stdc++.h>
using namespace std;

const int memory_size = 100;
const int regis_size = 16;
int print(int x[], int y[]);


int main(int argc, char** argv)
{
	int regis[regis_size];	
	int memory[memory_size];
	for(int i = 0; i < memory_size; i++)
	{
		memory[i] = i * 2; 
	}

	for(int i = 0; i < regis_size; i++)
	{
		regis[i] = i; 
	}	
	int OP = 0xff000000;
	int RA = 0x00f00000;
	int RB = 0x000f0000;
	int RC = 0x0000f000;
	int CX12 = 0x00000fff;
	int CX16 = 0x0000ffff;
	int CX20 = 0x00ffffff;
	int byte = 0x000000ff;
	
	int cmd;
	printf("Enter a load cmd :");
	cin >> hex >> cmd;
	
	int ra = (RA & cmd) >> 20, rb = (RB & cmd) >> 16, rc = (RC & cmd) >> 12, cx;
	int op = (cmd >> 24);
	
	switch(op)
	{
		case 0:
			cx = (CX16 & cmd);
			printf("LD R%d, [R%d+%d]\n", ra, rb, cx);
			printf("Befort R%d is %d\n", ra, regis[ra]);
			regis[ra] = memory[regis[rb] + cx];	
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		case 8:
			cx = (CX16 & cmd);
			printf("LDI R%d, R%d+%d\n", ra, rb, cx);
			printf("Befort R%d is %d\n", ra, regis[ra]);
			regis[ra] = regis[rb] + cx;
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		default:
			printf("%d not supported!\n", op);
	}
	print(regis, memory);
	return 0;
} 

int print(int x[], int y[])
{
	int k;
	printf("============================================================Memory List==========================================================\n");
	for(int i = 0; i < memory_size; i++)
	{
		printf("(M%02d :%4d), ", i, y[i]);
		if(++k == 10)
		{
			puts("");
			k = 0;
		}
	}
	k = 0;
	printf("============================================================Regis List============================================================\n");
	//printf("Regis List:\n");
	for(int i = 0; i < regis_size; i++)
	{
		printf("(R%02d :%4d), ", i, x[i]);
		if(++k == 8)
		{
			puts("");
			k = 0;
		}
	}
	printf("==================================================================================================================================\n");	
}
