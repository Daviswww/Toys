#include<cstdio>
#include<cstdlib>

int main()
{
	int n;
	printf("�п�J���B: ");
	scanf("%d", &n);

	printf("%d�i�d���r %d�i���ʤ��r %d�i�ʤ��r %d��50���ɪO %d�ӤQ���ɪO %d�Ӥ����ɪO %d��1���ɪO", 
	n/1000, (n%1000)/500,(n%500)/100, (n%100)/50, (n%50)/10, (n%10)/5 , n%5);
	return 0;
}
