// 編譯器：Dev C++
// 日期：2017/03/18 

#include <stdio.h>
#include <time.h> 
#define S 200
#define A 200
//產生亂數 
void g(int a[][A], int q, int w, int e) {
  int i, j;
  srand(time(NULL));
  for(i = 0; i < q; i++){
  	for(j = 0; j < w; j++){
      a[i][j] = -rand() % (e + 1) + rand() % (e + 1);;
	}	
  }
}

int main(void) {
  //  亂數     迴圈  陣列 範圍  分數 
  int a[S][A], i, j, q, w, e, point;
  //  路徑 
  int b[S][A], o, p;
  char z;
  
  do{
  //歸零 
  o = 1;
  p = 0;
  point = 0;
  printf("Enter the size of the maze and the number range in the maze: "); 
  scanf("%d %d %d", &q, &w, &e);
  g(a, q, w, e);
  //設置起點跟終點 
  for(i = 0; i < q; i++){
  	  for(j = 0; j < w; j++){
  	    if(i == 1 && j == 0) {
  	      a[i][j] = 0;
		  printf(" S ",a[i][j]);	
		  }
        else if(i == 2 && j == w - 1) {
          a[i][j] = 0;
          printf(" E ",a[i][j]);
		}
  	    else printf("%2d ",a[i][j]);
	    }
	puts("");	
    }
    puts("");
    printf("Total points: %d\n",point);
    //開始遊戲 
  do {
  	printf("---------------------------------------------------------\n");
  	printf("Your move R (right), L (left), U (up), D (down), Q(quit): ");
  	scanf("%s", &z);
  	getchar();
  	puts("");
  	//判斷往哪走 累加分數 point
  	if(z == 'R' || z == 'r'){
  		p++;
  		point += a[o][p];
  		a[o][p] = 87;
	  }
	if(z == 'L'|| z == 'l'){
  		p--;
  		point += a[o][p];
  		a[o][p] = 87;
	  }
	if(z == 'U'|| z == 'u'){
  		o--;
  		point += a[o][p];
  		a[o][p] = 87;
	  }
	if(z == 'D'|| z == 'd'){
  		o++;
  		point += a[o][p];
  		a[o][p] = 87;
	  }
	//列印 printf
  	for(i = 0; i < q; i++){
  	  for(j = 0; j < w; j++){
  	    if(i == 1 && j == 0) printf(" S ",a[i][j]);
        else if(i == 2 && j == w - 1) printf(" E ",a[i][j]);
        else if(a[i][j] == 87) printf(" + ",a[i][j]);
  	    else printf("%2d ",a[i][j]);
	    }
	puts("");	
    }
    puts("");
    printf("Total points: %d\n",point);
  }while(o != 2 && p != w);
  //是否重新遊玩 
   printf("=======================================================\n");
   printf("Play more (Y/N)? ");
   scanf("%s",&z);
   getchar();
  }while(z == 'Y' || z == 'y');
  printf("Thanks for playing the game.");
 
  system("pause");
}
