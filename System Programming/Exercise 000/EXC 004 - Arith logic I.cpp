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
	int CX24 = 0x00ffffff;
	int byte = 0x000000ff;
	int cmp  = 0x3fffffff;
	regis[12] = 0, regis[0] = 0;
	int cmd;
	printf("Enter a load cmd :");
	cin >> hex >> cmd;
	
	int ra = (RA & cmd) >> 20, rb = (RB & cmd) >> 16, rc = (RC & cmd) >> 12, cx;
	int op = (cmd >> 24);
	
	switch(op)
	{
		case 0x0:
			cx = (CX16 & cmd);
			printf("LD R%d, [R%d+%d]\n", ra, rb, cx);
			printf("Before R%d is %d\n", ra, regis[ra]);
			regis[ra] = memory[regis[rb] + cx];	
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		case 0x1:
			cx = (CX16 & cmd);
			printf("ST R%d, [R%d+%d]\n", ra, rb, cx);
			printf("Before M[R%d+%d] is %d\n", rb, cx, memory[regis[rb] + cx]);
			memory[regis[rb] + cx] = regis[ra];
			printf("After M[R%d+%d] is %d\n", rb, cx, memory[regis[rb] + cx]);
			break;
		case 0x2:
			cx = (CX16 & cmd);
			printf("LDB R%d, [R%d+%d]\n", ra, rb, cx);
			printf("Before R%d is %d\n", ra, regis[ra]);
			regis[ra] = byte & (memory[regis[rb] + cx]);	
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		case 0x3:
			cx = (CX16 & cmd);
			printf("STB R%d, [R%d+%d]\n", ra, rb, cx);
			printf("Before M[R%d+%d] is %d\n", rb, cx, memory[regis[rb] + cx]);
			memory[regis[rb] + cx] = regis[ra] & byte;
			printf("After M[R%d+%d] is %d\n", rb, cx, memory[regis[rb] + cx]);
			break;
		case 0x4:
			cx = (CX12 & cmd);
			printf("LDR R%d, [R%d+R%d]\n", ra, rb, rc);
			printf("Before R%d is %d\n", ra, regis[ra]);
			regis[ra] = memory[regis[rb] + regis[rc]];
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		case 0x5:
			cx = (CX12 & cmd);
			printf("STR R%d, [R%d+%d]\n", ra, rb, rc);
			printf("Before R%d is %d\n", ra, regis[ra]);
			regis[ra] = memory[regis[rb] + regis[rc]];	
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		case 0x6:
			cx = (CX12 & cmd);
			printf("LBR R%d, [R%d+%d]\n", ra, rb, rc);
			printf("Before R%d is %d\n", ra, regis[ra]);
			regis[ra] = byte & (memory[regis[rb] + regis[rc]]);	
			printf("After R%d is %d\n", ra, regis[ra]);	
			break;
		case 0x7:
			cx = (CX12 & cmd);
			printf("SBR R%d, [R%d+%d]\n", ra, rb, rc);
			printf("Before M[R%d+%d] is %d\n", rb, rc, memory[regis[rb] + regis[rc]]);
			memory[regis[rb] + regis[rc]] = regis[ra] & byte;
			printf("After M[R%d+%d] is %d\n", rb, rc, memory[regis[rb] + regis[rc]]);
			break;
		case 0x8:
			cx = (CX16 & cmd);
			printf("LDI R%d, R%d+%d\n", ra, rb, cx);
			printf("Before R%d is %d\n", ra, regis[ra]);
			regis[ra] = regis[rb] + cx;
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		case 0x10:
			printf("CMP Ra, Rb\n");
			if(regis[ra] > regis[rb])
			{
				printf("Ra > Rb\n");
				regis[12] = (cmp & regis[12]);
			}	
			else if(regis[ra] < regis[rb])
			{
				printf("Ra < Rb\n");
				regis[12] = (cmp & regis[12]) | 0x80000000;
			}
			else
			{
				printf("Ra = Rb\n");
				regis[12] = (cmp & regis[12]) | 0x40000000;
			}
			printf("R12 = %d\n", regis[12]);
			break;
		case 0x12:
			break;
		case 0x13:
			printf("ADD R%d, R%d, R%d\n", ra, rb, rc);
			printf("Before R%d is %d\n", ra, regis[ra]);
			regis[ra] = regis[rb] + regis[rc];
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		case 0x14:
			break;
		case 0x15:
			break;
		case 0x16:
			break;
		case 0x17:
			break;
		case 0x18:
			printf("AND R%d, R%d, R%d\n", ra, rb, rc);
			printf("Before R%d is %d\n", ra, regis[ra]);
			regis[ra] = (regis[rb] & regis[rc]);
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		case 0x19:
			break;
		case 0x20:
			break;
		case 0x21:
			break;
		case 0x22:
			break;
		case 0x23:
			cx = (CX12 & cmd);
			printf("SHL R%d, R%d, R%d\n", ra, rb, rc);
			printf("Before R%d is %d\n", ra, regis[ra]);
			regis[ra] = regis[rb] << cx;
			printf("After R%d is %d\n", ra, regis[ra]);
			break;
		case 0x24:
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
