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

double dist(Point a, Point b) {
  return sqrt(pow(a.getX()- b.getX(), 2) + pow(a.getY()- b.getY(), 2));
}

void r_p(Point p[], int n) {
     for(int i = 0; i < n; i++) {
       double x, y;
       cin >> x >> y;
       p[i].setPoint(x, y);
       }
}
void p_p(Point p[], int n) {
     for(int i = 0; i < n; i++) cout << p[i].str() << " ";
     cout << "\n";
     }
     
void number(Point p[], int n) {
     int i, j;
     Point maxa = p[0], maxb = p[n - 1], mixa = p[0], mixb = p[n - 1];
     double max = dist(p[0], p[n - 1]), mix = dist(p[0], p[n - 1]);
     for(i = 0; i < n - 1; i++) 
       for(j = i + 1; j < n; j++){
       if(dist(p[i], p[j]) > max ){
         max = dist(p[i], p[j]);
         maxa = p[i], maxb = p[j];
         }
       if(dist(p[i], p[j]) < mix ){
         mix = dist(p[i], p[j]);
         mixa = p[i], mixb = p[j];
         }
       }
       
     cout <<"max: " << maxa.str() << maxb.str() << " " << max << endl;
     cout <<"min: " << mixa.str() << mixb.str() << " " << mix << endl;
}
int main(void) {
  Point *p;
  int n;
  cout << "Enter n: ";
  cin >> n;
  p = new Point[n];
  r_p(p, n);
  p_p(p, n);
  number(p, n);
  system("pause");
}
