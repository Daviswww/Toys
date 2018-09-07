// �ɦW�Gb10502037-EX12.c
// �sĶ���GDev C++


#include <iostream>
#include <math.h>
#define SIZE 3 
using namespace std;

class Quadratic{
private:
  double a, b, c; // ax^2 + bx + c = 0
public:
  Quadratic(double _a = 0, double _b = 0, double _c = 0) {      // constructor
    setQuadratic(_a, _b, _c);
  }
  void setQuadratic(double _a, double _b, double _c) { // mutor
  	a = _a;
  	b = _b;
  	c = _c;
  }
  double getA() { return a; }        // accessor
  double getB() { return b; }        // accessor 
  double getC() { return c; }        // accessor
  void print(){
  	cout << "The equation is " << getA() <<"x^2 +"<<getB()<<"x + "<< getC() <<" = 0." << endl;//�C�L 
  }
  double sum(){
  	int j = 0, i, p[SIZE] = {0};
  	double a = getA(), b = getB(), c = getC();
  	//�ɤO�k�M�� 
  	for(i = -1000; i < 1000; i++){
  	 int  summ = 0;
	 if(a == 0 && b == 0 && c == 0) break;//�����פ� 
	 summ = (a * i * i) + (b * i) + c;//�p�� 
  		if( summ == 0) p[j++] = i;//�s�� 
	  }
	if(p[0] != 0) cout << "The roots are: " << "x = "<< p[0] << " and x = "<< p[1] <<".";//�P�_���L 
	  else cout << "There is no root. " ;
  }
};

int main(void) {
	double a, b, c;
	cout << "Enter the equation ax^2 + bx + c: ";
	cin >> a >> b >> c;
	Quadratic q(a, b, c);
	q.print();
	q.sum();
}
