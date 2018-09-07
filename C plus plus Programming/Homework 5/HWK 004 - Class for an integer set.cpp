// 編譯器：Dev C++
// 日期：2017/05/29 

#include <iostream>
#include <sstream>
#define S 100
using namespace std;
//一列排序 
int One(int c[]){
  int i, j, w;
  for(i = 0; i < 7; i++){
  	for(j = 0; j < 7; j++){
  		if(c[i] < c[j] && j != i){
  		  //存原數 
		  w = c[i];
		  //取代原數 
		  c[i] = c[j];
		  //返回原數 
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
//二列排序 
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
//全序 
int Jojo(int c[]){
  int i, j, w, k = 14;
  for(i = 0; i < k; i++){
  	for(j = 0; j < k; j++){
  		//檢查相同數字 
  		if(c[i] == c[j] && j != i){
		  c[i] = c[j];
		  c[j] = c[k-1];
		  k--;
		  }
	  }
  }
  //總體排序 
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
		//存數字 
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
