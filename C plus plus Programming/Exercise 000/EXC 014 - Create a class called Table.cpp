// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2017/05/25 

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#define S 100
using namespace std;
 
class Table {
private:
  int **table;
  int m, n, r;
public:
  Table(int m, int n, int r) {
    table = new int*[m];
    for (int i = 0; i < m; i++) table[i] = new int[n];
  };
};

int rand(int n, int m, int r, int a[][S]){
  for(int i = 0; i < n; i++){
  	for(int j = 0; j < m; j++){
  		a[i][j] = (rand()% r + 1) - (rand()% r + 1);
  		cout <<setw(5)<<a[i][j];
	  }cout <<endl;
  }
}
 
int main (void) {
  int m, n, r, a[S][S];
  cout << "Enter the size of the table and the value range: ";
  cin >> n >> m >> r;
  cout << "The Number Table is: " << endl;
  srand(time(0));
  rand(n, m, r, a);
  cout << "Enter the row number and column number: ";
  int o, p;
  cin >> o >> p;
  cout << "The value is " << a[o-1][p-1]<<endl;
  
}
