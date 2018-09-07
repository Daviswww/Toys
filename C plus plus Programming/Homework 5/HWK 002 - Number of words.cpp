// 編譯器：Dev C++
// 日期：2017/05/29 

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
	//亂數 
	srand(time(0));
	k = rand() % n;
	cout << "Enter "<< n <<" words: ";
	//輸入字串 
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		//選取字串 
		if (i == k) b = a;
	}
	
	for (int i = 0; i < b.size(); i++)
	{   //隨機排列 
		num[i] = rand() % b.size();
		//避免重複 
		for (int j = 0; j < i; j++)
		{
			if (num[i] == num[j])
			{
				--i;
			    break;
			}
		}
	}
	//重新排列字串 
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
