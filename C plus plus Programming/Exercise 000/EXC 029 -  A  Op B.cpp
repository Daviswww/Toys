#include<bits/stdc++.h>

using namespace std;
/*
 試寫一個簡單的程式，能讓使用者輸入二個整數(數字間以逗號隔開)，
 分別存至 a 及 b 的變數中，輸出兩數相加、相減、相乘和相除的結果。 
 提示: (1)相除可能有小數，因此除法需能顯示出小數 (2)輸入資料指令 scanf("%d,%d", &a,&b);
*/
int main()
{
	double a, b;
	printf("Enter a,b:");
	while(scanf("%lf,%lf", &a, &b) != EOF)
	{
		printf("相加: %.0lf\n", a + b);
		printf("相減: %.0lf\n", a - b);
		printf("相乘: %.0lf\n", a * b);
		printf("相除: %lf\n", a / b);
		printf("Enter a,b:");
	}
	
	return 0;
} 
