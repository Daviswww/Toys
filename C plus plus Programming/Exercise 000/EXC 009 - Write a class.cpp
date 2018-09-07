// 編譯器：Dev C++
// 日期：2017/4/18 

#include <iostream>
using namespace std;

class Game {
private:
  string no, name; //命名 

public: //設定 
  Game(string _no = "", string _name = "") 	{
  	setGame(_no, _name);
  }
  void setGame(string _no, string _name) 	{ 
    no = _no;
    name = _name;
  }

  string getNo() { return no; } //接收 
  string getName() { return name; }
  
  void gname() { cout << name << " is a good game.\n"; } //列印 
  void gstar() { cout << name << " is " << no << " star!\n"; }//列印 

};

int main(void) {
  string no, name;

  cout << "Enter game star, name: ";
  cin >> no >> name;
  Game g(no, name);
  g.gname(); //傳出來 
  g.gstar(); //傳出來 
  
  system("pause");
}
