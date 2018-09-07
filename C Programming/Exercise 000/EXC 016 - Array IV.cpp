// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2017/01/13

#include<stdio.h>
#include <stdlib.h>

int main()
{
	double ary[10], i, sum = 0;
	for(i = 0; i < 5; i++)
	{
		scanf("%d", ary[i]);
		sum += ary[i];
	}
	printf("The total is %lf\n", sum);
	printf("The average is %lf\n", sum/5);
	system("pause");
}
