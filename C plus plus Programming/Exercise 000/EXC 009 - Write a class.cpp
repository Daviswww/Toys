// �sĶ���GDev C++
// ����G2017/4/18 

#include <iostream>
using namespace std;

class Game {
private:
  string no, name; //�R�W 

public: //�]�w 
  Game(string _no = "", string _name = "") 	{
  	setGame(_no, _name);
  }
  void setGame(string _no, string _name) 	{ 
    no = _no;
    name = _name;
  }

  string getNo() { return no; } //���� 
  string getName() { return name; }
  
  void gname() { cout << name << " is a good game.\n"; } //�C�L 
  void gstar() { cout << name << " is " << no << " star!\n"; }//�C�L 

};

int main(void) {
  string no, name;

  cout << "Enter game star, name: ";
  cin >> no >> name;
  Game g(no, name);
  g.gname(); //�ǥX�� 
  g.gstar(); //�ǥX�� 
  
  system("pause");
}
