// 編譯器：Dev C++
// 日期：2017/04/29 

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#define T 5

using namespace std;
 
class Point {
private:
  double x, y;
public:	
  Point(double _x = 0, double _y = 0) {
  	setPoint(_x, _y);
  }
  void setPoint(double _x = 0, double _y = 0) {
  	x = _x;
  	y = _y;
  }
  double getX() { return x; }
  double getY() { return y; }
  //輸出字串 
  string str() {
  ostringstream out;
  	out << "(" << getX() << ", " << getY() << ")"; 
  	return out.str();
  }
};
//4個座標 
class Line {
private:
  Point a, b, c, d;
public:	
  Line(Point _a, Point _b, Point _c, Point _d) {
  	setLine(_a, _b, _c, _d);
  }
  void setLine(Point _a, Point _b, Point _c, Point _d) {
    a = _a;
    b = _b;
    c = _c;
    d = _d;
  }
  Point getA() { return a; }
  Point getB() { return b; }
  Point getC() { return c; }
  Point getD() { return d; }
/* A(X1,Y1), B(X2,Y2), C(X3,Y3), D(X4,Y4) 
  
   l 0 8 4 0 0 l 
   l 0 0 4 6 0 l 

   =(0*0 + 8*4 + 4*6 + 0*0 - 8*0 + 4*0 + 0*4 + 0*6 ) * 0.5
*/
  string str() {
  	ostringstream out;
  	double X1 = getA().getX(), Y1 = getA().getY(), X2 = getB().getX(), Y2 = getB().getY(), X3 = getC().getX(), Y3 = getC().getY(), X4 = getD().getX(), Y4 = getD().getY();
  	if( ( (X1 + Y1 == 0) && (X2 + Y2 == 0) ) || ( (X1 + Y1 == 0) && (X3 + Y3 == 0) ) || ( (X1 + Y1 == 0) && (X4 + Y4 == 0) ) || ( (X2 + Y2 == 0) && (X3 + Y3 == 0) ) || ( (X2 + Y2 == 0) && (X4 + Y4 == 0) ) || ( (X3 + Y3 == 0) && (X4 + Y4 == 0) ) || ( X1 == Y1 && X2 == Y2 && X3 == Y3 && X4 == Y4) ){
	  out << 0;
	  } 
  	else out << ( (X1 * Y2) + (X2 * Y3) + (X3 * Y4) + (X4 * Y1) -(X2 * Y1) + (X3 * Y2) + (X4 * Y3) + (X1 * Y4) ) * 0.5;
  	return out.str();
  } 
  //The quadrilateral is not a rectangle.
  void op(){
  	double q, w, e, r;
    double X1 = getA().getX(), Y1 = getA().getY(), X2 = getB().getX(), Y2 = getB().getY(), X3 = getC().getX(), Y3 = getC().getY(), X4 = getD().getX(), Y4 = getD().getY();
    q = sqrt((X2 - X1) * (X2 - X1) - (Y2 - Y1) * (Y2 - Y1));
    w = sqrt((X3 - X2) * (X3 - X2) - (Y3 - Y3) * (Y3 - Y3));
    e = sqrt((X2 - X1) * (X4 - X3) - (Y4 - Y3) * (Y4 - Y3));
    r = sqrt((X4 - X1) * (X4 - X1) - (Y4 - Y1) * (Y4 - Y1));
    //判斷斯四邊長是否相等 
    if(q == w == e == r && (q + w + e + r ) != 0 ) printf("The quadrilateral is a rectangle. ");
      else printf("The quadrilateral is not a rectangle. ");
  }
};

int main(void) {
  double x1, y1, x2, y2, x3, y3, x4, y4 ;
  cout << "Enter 4 points: ";
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
  Point a(x1, y1), b(x2, y2), c(x3, y3) ,d(x4, y4);
  Line OWO(a, b, c, d);
  cout << "The quadrilateral area formed by " << a.str() <<" , "<< b.str() <<" , "<< c.str() <<" and "<< d.str() <<" is " << OWO.str() <<"."<< endl; 
  OWO.op();
}
