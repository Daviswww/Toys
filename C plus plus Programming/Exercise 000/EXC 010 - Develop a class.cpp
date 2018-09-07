// 編譯器：Dev C++
// 日期：2017/4/18 

#include <iostream>
using namespace std;

class permutation {
private:
  double n, r; //命名 

public: //設定 
  permutation(double _n = 0, double _r = 0) 	{
  	setPermutation(_n, _r);
  }
  void setPermutation(double _n, double _r) 	{ 
    n = _n;
    r = _r;
  }
  //接收
  double getN() { return n; }  
  double getR() { return r; }
  //n!/(n-r)! 
  //長整數 
  long long sum() { 
    long long k = 1, l = 1, i; 
	for(i = 1; i <= n; i++) k *= i;       // n!
	for(i = 1; i <= n - r; i++) l *= i;   // (n-r)!
	return k / l;
  }
 
};

int main(void) {
  double n, r;

  cout << "Enter the total number of items: ";
  cin >> n;
  cout << "Enter the number of items to be selected: ";
  cin >> r;
  permutation p(n, r);
  cout << "The possible permutation is " << p.sum() << endl;
  system("pause");
}
