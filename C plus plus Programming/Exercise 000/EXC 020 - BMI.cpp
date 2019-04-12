#include<cstdio>
#include<cstdlib>

int main()
{
	double weight, height, BMI = 0.0;
	
	printf("請輸入您的身高與體重資料：");
	scanf("%lf %lf", &height, &weight);
	
	BMI = (weight)/(height * height);
	if(BMI < 0)
	{
		printf("輸入錯誤!\n");
	}
	else
	{
		if(BMI < 17)
		{
			printf("您的BMI值為%.2lf，您過輕了\n", BMI);
		}
		else if(BMI > 24)
		{
			printf("您的BMI值為%.2lf，您過重了", BMI);
		}
		else
		{
			printf("您的BMI值為%.2lf，您很健康", BMI);
		}	
	}
	return 0;
}
