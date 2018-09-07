// 編譯器：Dev C++
// 日期：2016/11/11

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define LEN 80

int main(void) {

  char name[LEN] = "", a, b, go, r, c, i, n, m;//A遊玩次數，B執行次數，GO執行，R骰子1號，C骰子2號 

 do{
  srand(time(0));
  printf("=================================================\n");
  printf("The Game of Happy Fortune\n");
  printf("Enter your name: ");
  scanf("%s", name);  //掃描名字 
  getchar();
  printf("%s, welcome to the game of Happy Fortune.", name);
  char tempname[strlen(name)];//複製名字
  strcpy(tempname,name);
  printf("The fortune is as follows:\n\
-------------------------------------------------\n\
 1: NT $100\n\
 2: Play again!\n\
 3: Thanks for your play!\n\
 4: NT $100\n\
 5: NT $200\n\
 6: Thanks for your play!\n\
 7: Play again!\n\
 8: Thanks for your play!\n\
 9: NT $200\n\
10: NT $100\n\
11: Thanks for your play!\n\
12: NT $100\n\
=================================================\n");  
    printf("Add games ($50 for each play) :\n");
    scanf("%d",&a);
    getchar(); 

    printf("Number of plays: %d\n",a);
    printf("Total pay: $%d \n",a * 50);
    printf("Thanks for your playing Game of Happy Fortune.\n");
    printf("Play now (Y/N)?");
    scanf("%c",&go);
	getchar();
    
  if (go == 'N' || go == 'n') break; //如果是N結束到最下面要不要離開遊戲 
	else  //其他則繼續執行 
	  printf("=================================================\n");
    for(i = 1,m = 0,n = 0; i<= a; i++) {  //迴圈: i等於1 ， m值歸零 ， i <= 遊玩次數
	  printf("Games %d\n",i );
      printf("Your roll is %d \n",r = rand() % 12+1); //丟骰子 

    //以下是隨機選項然後選擇裡面讀到兩個骰子加起來的數字 
        switch( r ) {
          case 1: puts("You won NT $100"); m++; break;
          case 2: {
	        puts("Play again!");i--;
	        printf("-------------------------------------------------\n");
	        }continue; break; //如果丟到 Play again! i--然後重新執行一次這樣遊戲次數就不會增加 
          case 3: puts("Thanks for your play!"); break;
          case 4: puts("You won NT $100"); m++; break;
          case 5: puts("You won NT $200"); n++; break;
          case 6: puts("Thanks for your play!"); break;
          case 7: {
	        puts("Play again!");i--;
	        printf("-------------------------------------------------\n");
  	        }continue; break; //如果丟到 Play again! i--然後重新執行一次這樣遊戲次數就不會增加 
          case 8: puts("Thanks for your play!"); break;
          case 9: puts("You won NT $200");n++; break;
          case 10: puts("You won NT $100"); m++; break;
          case 11: puts("Thanks for your play!"); m++; break; 
          case 12: puts("You won NT $100"); m++; break; 
          default: puts("Try again!");
        } 
	  
      printf("Play more (Y/N)?"); //還要玩嗎~ 
      scanf("%c",&go);
	  getchar();
      printf("=================================================\n");
	  if (go == 'Y' || go == 'y') continue;
	    else break;
      
    } 
    printf("謝謝遊玩~如果要繼續請重新開始\n");
    printf("The summary of %s's fortune is as follows:\n", tempname);
    printf("You spent NT $ %d and won NT %d.\n", a * 50, m * 100 + n * 200);
    printf("=================================================\n");
    printf("Quit the game (Y/N)?");  //要離開遊戲嗎 
    scanf("%c",&go); //掃描 
    getchar(); 
} while (go == 'N' || go == 'n'); //當是Y時從頭開始執行 
    printf("=================================================\n");
    printf("Thanks for playing!"); //謝謝遊玩 
return 0;
  system("pause");
}
