// 編譯器：Dev C++
// 日期：2016/1/8

#include <stdio.h>
#include <time.h>
#define SIZE 6
#define N 10
#define M 99

int main(void) {
  int number[SIZE], guess[SIZE], i, j, n, g, c, t = 0;
  char name[M];
  srand(time(0));
	do{
	  printf("=================================================\n");
	  printf("Welcome to the Happy Lottery Game!\n");
	  printf("Your name:");
	  scanf("%s", name);
	  printf("%s, welcome to the game!\n",name);
		do {
		  
		  printf("=================================================\n");
		  printf("Enter the number of tickets you want to buy: ");
		  scanf("%d", &n);
		  //000000 ~ 999999
		  printf("Computer or Player select (C/P)? ");
		  scanf("%s",&g);
		  if( g == 'C' || g == 'c'){//電腦選 
		    for(j = 0; j < n; j++){
		    printf("Select numbers: ");
		  	  for (i = 0; i < SIZE; i++) {
		        number[i] = rand() % N;
		        printf("%2d", number[i]);
		      }
			puts("");
		    }
		  }
		  if( g == 'P' || g == 'p'){//自己選 
		   	for(j = 0; j < n; j++){
		      printf("Select numbers: ");
		      scanf("%d",number);
		    }
			puts("");
		  }
		  printf("-------------------------------------------------\n");
		  printf("Rita's Receipt:\n");
		  printf("Total pay: %d\n",n * 50);
		  printf("Thanks for your playing Happy Lottery.\n");
		  printf("=================================================\n");
		  printf("Play more (Y/N)? ");//要重玩嗎 
		  scanf("%s",&c);
		  getchar();
		   //計算幾張
		  t += n;
		}while(c == 'Y' || c == 'y');
	  printf("The lottery result is:\n");
	  //選號 
	  for (i = 0; i < SIZE; i++) {
		        number[i] = rand() % N;
		        printf("%2d", number[i]);
		      }
	  puts("");
	  printf("%s! Congratulations! You won 3 stars.\n",name);//選中幾個 
	  printf("You spent NT %d and won NT 200.\n",t * 50);//計算 
	  printf("=================================================\n");
	  printf("Quit the game (Y/N)?\n");//繼續遊戲? 
	  scanf("%s",&c);
	  getchar();
	}while( c == 'N' || c == 'n');
  system("pause");
}
