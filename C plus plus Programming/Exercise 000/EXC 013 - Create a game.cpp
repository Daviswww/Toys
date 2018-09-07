// 編譯器：Dev C++
// 日期：2017/05/11 

#include <iostream>
#include <cstdlib>
#include <ctime>
#define S 100
using namespace std;
//亂數 
void dodo(int m, int n, int b[]) {
  int i, j, op;
  srand(time(0));
  for(i = 0; i < n * m; i++){
    b[i] = rand()% ((2 * n * m) - 1) + 1;
    if(b[i] % 2 == 0) {
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
    int m, n, b[S], i, j, a[S][S] = {0}, c[S][S], k;
    char go;
    cout << "Enter m n: ";
    cin >> m >> n;
    dodo(m, n, b);
    //列印星號並且把值存進C陣列內 
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        c[i][j] = b[k++];
        cout << "  *";
        }
        cout << endl;
      } 
    int q, w, e, r, py, cp, tpy = 0, tcp = 0;
    cout << "Continue to play (Y|N)? ";
    cin >> go;
    while(go == 'y' || go == 'Y'){
      cout << "Player select: ";
      cin >> q >> w;
      //把翻過的變改一 
      a[q-1][w-1] = 1;
      srand(time(0));
      for(;;){
        e = rand()% m + 1, r = rand()% n + 1;
        if(a[e-1][r-1] == 0) break;
      }
      //把翻過的變改一 
      a[e-1][r-1] = 1;
      cout << "Computer select: " << e << " "<< r << endl;
      for(i = 0; i < m; i ++){
        for(j = 0; j < n; j++){
        if(a[i][j] == 1) cout <<" "<< c[i][j];
          else cout << "  *";
        }
        cout << endl;
      }
      //取出數字 
      py = c[q-1][w-1], cp = c[e-1][r-1];
      cout << "Player: " << py << "  Computer:" << cp << endl;
      //比誰的數字大，大的勝然後加到總數內 
      if(py > cp) {
        tpy += py + cp;
        cout <<"Player wins "<< tpy <<" points." << endl;
        }
      if(py < cp) {
        tcp += py + cp;
        cout <<"Computer wins "<< tcp <<" points." << endl;
        }
      cout << "Continue to play (Y|N)? ";
      cin >> go;
    }
    cout <<"Player: " << tpy <<" "<< "Computer: " << tcp << endl;
    if(tpy > tcp) cout << "Player wins the game."<< endl;
    if(tpy < tcp) cout << "Computer wins the game."<< endl;   
    system("pause");
    }
