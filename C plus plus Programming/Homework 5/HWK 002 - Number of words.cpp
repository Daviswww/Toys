// �sĶ���GDev C++
// ����G2017/05/29 

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <ctime>
#define S 100
using namespace std;

int main(void)
{
	int n, k, num[S];
	string a, b, c, d;

	cout << "Enter the number of words: ";
	cin >> n;
	//�ü� 
	srand(time(0));
	k = rand() % n;
	cout << "Enter "<< n <<" words: ";
	//��J�r�� 
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		//����r�� 
		if (i == k) b = a;
	}
	
	for (int i = 0; i < b.size(); i++)
	{   //�H���ƦC 
		num[i] = rand() % b.size();
		//�קK���� 
		for (int j = 0; j < i; j++)
		{
			if (num[i] == num[j])
			{
				--i;
			    break;
			}
		}
	}
	//���s�ƦC�r�� 
	for(int i = 0; i < b.size(); i++)
	{
		c[i] = b[num[i]];
	}
	cout << "The randomly selected word is "<< b <<" and scrambled as ";
	for(int i = 0; i < b.size(); i++)
	{
		cout << c[i];
	}
	cout << ".";

}
