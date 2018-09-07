#include <iostream>
#include <sstream>
#include <cmath>
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
        double getX() {return x;}
        double getY() {return y;}
        
        string str() {
               ostringstream out;
               out << "(" << getX() << ", " << getY() << ")";
               return out.str();
               }
};

class Polygon {
      protected:
        Point *p;
        int n;
      public:
        Polygon(int _n = 3) {
           n = _n;
           p = new Point[n];
           }
        Polygon(Point *_p, int _n) {
          setPolygon(_p, _n);
          }   
        void setPolygon(Point *_p, int _n) {
             n = _n;
             p = new Point[n];
             for(int i = 0; i < n; i++) p[i] = _p[i];
             }       
        string str() {
               ostringstream out;
               for(int i = 0; i < n; i++) out << p[i].str() << " ";
               return out.str();
               }
};

double dist(Point a, Point b) {
       return sqrt(pow(a.getX() - b.getX(), 2) + pow(a.getY() - b.getY(), 2));
       }
class Tr : public Polygon {
      public:
        Tr() : Polygon(3){}
        Tr(Point a, Point b, Point c) {
                setTr(a, b, c);
                }
        void setTr(Point a, Point b, Point c) {
             Point *p = new Point[3];
             p[0] = a;
             p[1] = b;
             p[2] = c;
             setPolygon(p, 3);
             }
             double area() {
                    double a = dist(p[0], p[1]), b = dist(p[1], p[2]), c = dist(p[2], p[0]);
                    if(a + b > c && b + c > a && c + a > b) {
                      double s = (a + b + c)/2;
                      return sqrt(s * (s - a) * (s - b) * (s - c));
                      } else return 0;
                      }
};
int main(void) {
    double x1, y1, x2, y2, x3, y3;
    cout <<"Enter 3 point: ";
    cin >> x1>> y1>> x2>> y2>> x3>> y3;
    Point a(x1, y1), b(x2, y2), c(x3, y3);
    Tr t(a, b, c);
    cout <<"The tirangle has " << t.str() << endl;
    cout <<"The tirangle area is " << t.area();
    system("pause");
}
