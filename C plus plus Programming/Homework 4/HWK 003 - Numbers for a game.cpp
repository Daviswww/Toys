// 編譯器：Dev C++
// 日期：2017/05/29 

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>
#define S 100
using namespace std;

class Jojo {
private:
  int **board, row, col;
public:
  GameBoard(int m = 1, int n = 1) {
  	row = m;
  	col = n;
  	board = new int*[row];
  }
  int getRow() { return row; }
  int getCol() { return col; }

};
//亂數 
void dodo(int m, int n, int u,int b[]) {
  int i, j, op;
  srand(time(0));
  for(i = 0; i < n * m; i++){
    b[i] = rand()% (2 * u)+ 1;
    if(b[i] % 2 == 1) {
      i--;
      continue;
      }
    //防止重複 
    for(j = 0; j < n * m; j++){
      if(b[i] == b[j] && i != j)  {
      	i--;
      	break;
	  }
	}
   }
}

int main(){
    int m, n, u, b[S], i, j, a[S][S] = {0}, c[S][S], k;
    char go;
    cout << "Enter the size of the table and the value range: ";
    cin >> m >> n >> u;
    dodo(m, n, u, b);
    //列印並且把值存進C陣列內 
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        c[i][j] = b[k++];
        cout << setw(3) <<c[i][j];
        }
        cout << endl;
      } 
    int q, w, e, r, py, cp, tpy = 0, tcp = 0, ww = 0;
    cout << "Continue to play (Y|N)? ";
    cin >> go;
    while(go == 'y' || go == 'Y'){
      srand(time(0));
      //player
      for(;;){
        q = rand()% m + 1, w = rand()% n + 1;
        if(a[q-1][w-1] == 0) break;
      }
	  //標記翻過的 
      a[q-1][w-1] = 1;  
	  //computer    
      for(;;){
        e = rand()% m + 1, r = rand()% n + 1;
        if(a[e-1][r-1] == 0) break;
      }
      //標記翻過的
      a[e-1][r-1] = 1;
      //取出數字 
      py = c[q-1][w-1], cp = c[e-1][r-1];
      cout << "Player: "<< py <<"   Computer: "<< cp << endl;
      //比誰的數字大，大的勝然後加到總數內 
      if(py > cp) {
        tpy += py + cp;
        ww = py + cp;
        cout <<"Player wins "<< ww <<" points."<<" Computer wins 0 points." << endl;
        }
      if(py < cp) {
        tcp += py + cp;
        ww = py + cp;
        cout <<"Player wins 0 points."<<" Computer wins "<< ww <<" points." << endl;
        }
       //沒標記的列印數字有標記的則列印星號 
      for(i = 0; i < m; i ++){
        for(j = 0; j < n; j++){
        if(a[i][j] == 0) cout << setw(3) << c[i][j];
          else cout << setw(3) <<"*";
        }
        cout << endl;
      }
      cout << "Continue to play (Y|N)? ";
      cin >> go;
    }
	//結算成績 
    cout <<"Player: " << tpy <<" "<< "Computer: " << tcp << endl;
    if(tpy > tcp) cout << "Player wins "<< tpy <<" points. Computer wins "<< tcp <<" points. Player wins the game."<< endl;
    if(tpy < tcp) cout << "Player wins "<< tpy <<" points. Computer wins "<< tcp <<" points. Computer wins the game."<< endl;   
    system("pause");
    }
