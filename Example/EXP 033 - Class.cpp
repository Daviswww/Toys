#include<bits/stdc++.h>

using namespace std;
class Fun
{
private:
	int *w, *h;
public:
	Fun(int , int);
	int sum(void)
	{
		return (*w * *h);
	}
};

Fun::Fun(int a, int b)
{
	w = new int;
	h = new int;
	*w = a;
	*h = b;
}

int main()
{
	Fun call(3 ,4);
	cout << call.sum();
	return 0;	
}
