#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
using namespace std;
class Point {
private :
  double x, y;
public :
  Point(double _x = 0, double _y = 0) {
    setPoint(_x, _y);
  }
  void setPoint(double _x, double _y) {
       x = _x;
       y = _y;
  }
  double getX() {return x;}
  double getY() {return y;}
  string str() {
    ostringstream out;
    out << "(" << getX() << ", " << getY() << ")";
    return out.str();
  }
};
double dist(Point a, Point b) {
  return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
}
//---------------------------------------
class Triangle {
private :
  Point a, b, c;
public :
  Triangle(Point _a, Point _b, Point _c) {
    setTriangle(_a, _b, _c);
  }
  void setTriangle(Point _a, Point _b, Point _c) {
       a = _a;
       b = _b;
       c = _c;
  }
  Point getA() {return a;}
  Point getB() {return b;}
  Point getC() {return c;}
  double area() {
    double ab = dist(a, b), bc = dist(b, c), ca = dist(c, a);
    if(ab + bc > ca && bc + ca > ab && ca + ab > bc)  {
      double s = (ab +bc +ca) / 2;
      return pow(s * (s - ab) * (s - bc) * (s - ca), 0.5);
      }else return 0;
    }
};
int main(void) {
    double x1, y1, x2, y2, x3, y3;
    cout << "Enter 3 point: ";
    cin >>x1 >>y1 >> x2 >> y2 >> x3 >> y3;
    Point a(x1, y1), b(x2, y2), c(x3, y3);
    Triangle t(a, b, c);
    cout << "The area formed by " << a.str() << ", " << b.str() << ", and " << c.str() << " is " << t.area() << ".\n";
    system("pause");
}
