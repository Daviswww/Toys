// �sĶ���GDev C++
// ����G2017/05/29 

#include <iostream>
#include <sstream>
#define S 100
using namespace std;
//�@�C�Ƨ� 
int One(int c[]){
  int i, j, w;
  for(i = 0; i < 7; i++){
  	for(j = 0; j < 7; j++){
  		if(c[i] < c[j] && j != i){
  		  //�s��� 
		  w = c[i];
		  //���N��� 
		  c[i] = c[j];
		  //��^��� 
		  c[j] = w;
		  }
	  }
  }
  for(int i = 0; i < 7; i++)
	{
		cout << c[i];
		if(i != 6) cout <<", ";
	}
}
//�G�C�Ƨ� 
int Punch(int c[]){
  int i, j, w;
  for(i = 7; i < 14; i++){
  	for(j = 7; j < 14; j++){
  		if(c[i] < c[j] && j != i){
		  w = c[i];
		  c[i] = c[j];
		  c[j] = w;
		  }
	  }
  }
  for(int i = 7; i < 14; i++)
	{
		cout << c[i];
		if(i != 13) cout <<", ";
	}
}
//���� 
int Jojo(int c[]){
  int i, j, w, k = 14;
  for(i = 0; i < k; i++){
  	for(j = 0; j < k; j++){
  		//�ˬd�ۦP�Ʀr 
  		if(c[i] == c[j] && j != i){
		  c[i] = c[j];
		  c[j] = c[k-1];
		  k--;
		  }
	  }
  }
  //�`��Ƨ� 
  for(i = 0; i < k; i++){
  	for(j = 0; j < k; j++){
  		if(c[i] < c[j] && j != i){
		  w = c[i];
		  c[i] = c[j];
		  c[j] = w;
		  }
	  }
  }
  for(int i = 0; i < k; i++)
	{
		cout << c[i];
		if(i != k-1) cout <<", ";
	}
}
int main(void) {
	int a[S], b[S], c[S];
	cout <<"Enter the first set: ";
	for(int i = 0; i < 7; i++)
	{
		cin >> a[i];
		//�s�Ʀr 
		c[i] = a[i];
	}
	cout <<"Enter the second set: ";
	for(int i = 7; i < 14; i++)
	{
		cin >> b[i];
		c[i] = b[i];
	}
	cout <<"First set: {";
    One(c);
	cout <<"}"<<endl <<"Second set: { ";
    Punch(c);
	cout <<"}"<< endl <<"Union of two sets: {";
	Jojo(c);
	cout << "}";
}
