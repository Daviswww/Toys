#include<cstdio>
#include<cstdlib>

int main()
{
	int n;
	printf("請輸入金額: ");
	scanf("%d", &n);

	printf("%d張千元鈔 %d張五百元鈔 %d張百元鈔 %d個50元銅板 %d個十元銅板 %d個五元銅板 %d個1元銅板", 
	n/1000, (n%1000)/500,(n%500)/100, (n%100)/50, (n%50)/10, (n%10)/5 , n%5);
	return 0;
}
