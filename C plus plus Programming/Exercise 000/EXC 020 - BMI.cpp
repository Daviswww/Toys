#include<cstdio>
#include<cstdlib>

int main()
{
	double weight, height, BMI = 0.0;
	
	printf("�п�J�z�������P�魫��ơG");
	scanf("%lf %lf", &height, &weight);
	
	BMI = (weight)/(height * height);
	if(BMI < 0)
	{
		printf("��J���~!\n");
	}
	else
	{
		if(BMI < 17)
		{
			printf("�z��BMI�Ȭ�%.2lf�A�z�L���F\n", BMI);
		}
		else if(BMI > 24)
		{
			printf("�z��BMI�Ȭ�%.2lf�A�z�L���F", BMI);
		}
		else
		{
			printf("�z��BMI�Ȭ�%.2lf�A�z�ܰ��d", BMI);
		}	
	}
	return 0;
}
