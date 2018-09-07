// �sĶ���GDev C++
// ����G2017/05/29 

#include <iostream>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include <ctime>
#define A 100
#define S 100
using namespace std;

class Jojo {
private:
  int **board, row, col;
public:
  GameBoard(int q = 1, int w = 1) {
  	row = q;
  	col = w;
  	board = new int*[row];
  }
  int getRow() { return row; }
  int getCol() { return col; }

};
//���Ͷü� 
void g(int a[][A], int q, int w, int e) {
  int i, j;
  srand(time(0));
  for(i = 0; i < q; i++){
  	for(j = 0; j < w; j++){
      a[i][j] = rand() % (e + 1) - rand() % (e + 1);
      if(a[i][j] == 0){
      	--j;
      	continue;
	  } 
	}	
  }
}

int main(void) {
  //�üơB�����B�j��B�}�C�B�d��B���ơB���| 
  int a[S][A], l[S][A] = {0}, i, j, q, w, e, point = 0, o = 2, p = 0;
  char z;
  do{
  //�k�s 
  int point = 0, o = 2, p = 0, l[S][A] = {0};
  printf("Enter the size of the maze and the number range in the maze: "); 
  cin >> q >> w >> e;
  g(a, q, w, e);
  //�]�m�_�I����I 
  for(i = 0; i < q; i++){
  	  for(j = 0; j < w; j++){
  	    if(i == 2 && j == 0) {
  	      a[i][j] = 0;
		  printf(" S ",a[i][j]);	
		  }
        else if(i == q - 2 && j == w - 1) {
          a[i][j] = 0;
          printf(" E ",a[i][j]);
		}
  	    else printf(" 0 ",a[i][j]);
	    }
	puts("");	
    }
    puts("");
    printf("Total points: %d\n",point);
    //�}�l�C�� 
  do {
  	printf("---------------------------------------------------------\n");
  	printf("Your move R (right), L (left), U (up), D (down), Q(quit): ");
  	scanf("%s", &z);
  	getchar();
  	puts("");
  	//�P�_�������A�֥[���� point�A�аO 
  	if(z == 'R' || z == 'r'){
  		p++;
  		point += a[o][p];
  		l[o][p] = 1;
	  }
	if(z == 'L'|| z == 'l'){
  		p--;
  		point += a[o][p];
  		l[o][p] = 1;
	  }
	if(z == 'U'|| z == 'u'){
  		o--;
  		point += a[o][p];
  		l[o][p] = 1;
	  }
	if(z == 'D'|| z == 'd'){
  		o++;
  		point += a[o][p];
  		l[o][p] = 1;
	  }
	//�C�L printf
  	for(i = 0; i < q; i++){
  	  for(j = 0; j < w; j++){
  	    if(i == 2 && j == 0) printf(" S ",a[i][j]);
        else if(i == q - 2 && j == w - 1) printf(" E ",a[i][j]);
        else if(l[i][j] != 1) printf(" 0 ",a[i][j]);
  	    else printf("%2d ",a[i][j]);
	    }
	puts("");	
    }
    puts("");
    printf("Total points: %d\n",point);
  }while(l[q - 2][w - 1] != 1);
  //�O�_���s�C�� 
   printf("=======================================================\n");
   printf("Play more (Y/N)? ");
   scanf("%s",&z);
   getchar();
  }while(z == 'Y' || z == 'y');
  printf("Thanks for playing the game.");
 
  system("pause");
}
