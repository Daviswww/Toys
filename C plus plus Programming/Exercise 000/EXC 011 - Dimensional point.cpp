// 編譯器：Dev C++
// 日期：2017/4/25 

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

class Point {
private:
  double x, y, z;
public:	
  Point(double _x = 0, double _y = 0,double _z = 0) {      // constructor
    setPoint(_x, _y, _z);	
  }
  void setPoint(double _x, double _y, double _z) { // mutor
  	x = _x;
  	y = _y;
  	z = _z;
  }
  double getX() { return x; }      // accessor
  double getY() { return y; }      // accessor 
  double getZ() { return z; }      // accessor
  string str() {
    //輸出字串 
  	ostringstream out;
  	out << "(" << getX() << ", " << getY() <<", " << getZ() << ")"; // 三個點
  	return out.str();
  }
};

class Line {
private:
  Point a, b;
public:
  Line(Point _a = Point(), Point _b = Point()) {
    setLine(_a, _b);		
  } 
  void setLine(Point _a, Point _b) { // mutor
    a = _a;
    b = _b;
  }
  Point getA() { return a; }        // accessor
  Point getB() { return b; } 
  string str() {
  	ostringstream out;
  	double pa = getA().getX(), pb = getA().getY(), pc = getA().getZ(), paa = getB().getX(), pbb = getB().getY(), pcc = getB().getZ();
  	// 距離 
  	out << "The distance between" << "( "<< pa << ", " << pb << ", " << pc << " )" <<" and"<< "( "<<paa << ", " << pbb << ", " << pcc << " )"<<" is " << sqrt((pa - paa) * (pa - paa) + (pb - pbb) * (pb - pbb)+ (pc - pcc) * (pc - pcc)); 
  	return out.str();
  }       
};

int main(void) {
  double x1, y1, z1, x2, y2, z2;
  cout << "Enter two points: ";
  cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
  Point a(x1, y1, z1), b(x2, y2, z2);
  Line l(a, b);
  cout << l.str() << "\n"; //回傳 
  system("pause");
}
