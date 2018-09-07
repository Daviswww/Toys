// 編譯器：Dev C++
// 日期：2016/11/26 

#include <stdio.h>
#include <time.h>

int main(void) {
  char ans = 'y';
  int go,z,x;
  printf("**************************************************\n");
  printf("Welcome to the dice game!\n");
  printf("**************************************************\n");
  srand(time(0));
  do { // New Game 
    int play_wager = 100, comp_wager = 100;
    printf("Player's wager: %d\nComputer's wager: %d\n", play_wager, comp_wager);
    do{
	  int z=0,x=0;
      do{
        int play ,comp ,a ,b;
        printf("==================================================\n");
        printf("Enter player's number (1 ~ 6):");//玩家選擇1到6之間的數字。 
        scanf("%d",&play);
        getchar();
        printf("Computer's number (1 ~ 6): %d",comp = rand() % 6 + 1);//計算機隨機選擇一個介於1和6之間的數字。
        puts("");
        printf("Roll the dice.\n");//玩家和電腦擲骰子。 
        a = rand() % 6 + 1;
	    b = rand() % 6 + 1;
	    printf("Player: %d\n",a);
	    printf("Computer: %d\n",b);
	    //當一個人的總數是偶數，另一個是奇數時，那麼偶數總數是勝者。 否則，它是一個平局。
	    if ((play + a) % 2 == 0 && (comp + b) % 2 == 1 ) {
		  ++z; 
		  printf("=> Player wins %d.\n",z);
	      }
	      else if((play + a) %2 == 1 && (comp + b) % 2 == 0) {
		  ++x; 
		  printf("=> The computer wins %d.\n",x);
	      }
          else printf("=> No winner. Try again!\n");
        }while(z <= 1 && x <= 1);
        //誰贏得兩次勝利一套的遊戲。 贏家獲得20美元的賭注，輸家丟失20美元的賭注。
        if(z >= 2) {
	      play_wager += 20;
	      comp_wager -= 20;
          }
        else if(x >= 2) {
          play_wager -= 20;
	      comp_wager += 20;
          }
        printf("play_wager: %d\n",play_wager);
        printf("comp_wager: %d\n",comp_wager);
        printf("==================================================\n");
        printf("Continue (Y/N)?\n");//玩家可以繼續玩遊戲或退出遊戲。 
        scanf("%c",&go);
        getchar(); 
        if(go == 'N' || go == 'n') break;
    }while(go == 'Y' || go == 'y' || play_wager > 0 || comp_wager > 0);
    printf("==================== Game Over! ==================\n");
    printf("play_wager: %d\n",play_wager);//遊戲結束時，玩家或計算機失去所有的賭注。
    printf("comp_wager: %d\n",comp_wager);
    printf("Start a new game (Y|N)? \n");//一旦遊戲結束，玩家可以開始新遊戲或退出遊戲。 
    ans = getchar();
    getchar();
  } while (ans == 'y' || ans == 'Y');
}
