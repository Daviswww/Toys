#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;

class Point {
private:
  double x, y;
public:	
  Point(double _x = 0, double _y = 0) {      // constructor
    setPoint(_x, _y);	
  }
  void setPoint(double _x, double _y) { // mutor
  	x = _x;
  	y = _y;
  }
  double getX() { return x; }        // accessor
  double getY() { return y; }        // accessor
  string str() {
  	ostringstream out;
  	out << "(" << getX() << ", " << getY() << ")"; // (3.0000, 4.0000)
  	return out.str();
  }
};

class Line {
  private:
    double a, b, c;
  public:
    Line(double _a, double _b, double _c) {
      setLine(_a, _b, _c);
    }
void setLine(double _a, double _b, double _c) {
  a = _a;
  b = _b;
  c = _c;
}
  double getA() { return a; }
  double getB() { return b; }
  double getC() { return c; }
  string str() {
    ostringstream out;
    out << a << " x + " << b << " y = " << c;
    return out.str();
}
};

Point intersection(Line la, Line lb) {
  double a = la.getA(), b = la.getB(), c = la.getC(), d = lb.getA(), e = lb.getB(), f = lb.getC();
  if (a * e - b * d !=0) {
    double x = (c * e - b * f)/(a * e - b * d), y = (a * f - c * d)/(a * e - b * d);
    return Point(x, y);
  } else return NULL;
}
int main(void) {
    double a, b, c, d, e, f;
    cout << "Enter the first line ax + by = c (a, b, c): ";
    cin >> a >> b >> c;
    cout << "Enter the second line dx + ey = f (d, e, f): ";
    cin >> d >> e >> f;
    Line la(a, b, c), lb(d, e, f);
    cout << la.str() << "\n";
    cout << lb.str() << "\n";
    Point p = intersection(la, lb);
    cout << "The intersection is " << p.str();
    system("pause");
}
    
      
       
