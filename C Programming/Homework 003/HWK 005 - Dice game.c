// �sĶ���GDev C++
// ����G2016/11/26 

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
        printf("Enter player's number (1 ~ 6):");//���a���1��6�������Ʀr�C 
        scanf("%d",&play);
        getchar();
        printf("Computer's number (1 ~ 6): %d",comp = rand() % 6 + 1);//�p����H����ܤ@�Ӥ���1�M6�������Ʀr�C
        puts("");
        printf("Roll the dice.\n");//���a�M�q���Y��l�C 
        a = rand() % 6 + 1;
	    b = rand() % 6 + 1;
	    printf("Player: %d\n",a);
	    printf("Computer: %d\n",b);
	    //��@�ӤH���`�ƬO���ơA�t�@�ӬO�_�ƮɡA���򰸼��`�ƬO�Ӫ̡C �_�h�A���O�@�ӥ����C
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
        //��Ĺ�o�⦸�ӧQ�@�M���C���C Ĺ�a��o20��������`�A��a�ᥢ20��������`�C
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
        printf("Continue (Y/N)?\n");//���a�i�H�~�򪱹C���ΰh�X�C���C 
        scanf("%c",&go);
        getchar(); 
        if(go == 'N' || go == 'n') break;
    }while(go == 'Y' || go == 'y' || play_wager > 0 || comp_wager > 0);
    printf("==================== Game Over! ==================\n");
    printf("play_wager: %d\n",play_wager);//�C�������ɡA���a�έp������h�Ҧ�����`�C
    printf("comp_wager: %d\n",comp_wager);
    printf("Start a new game (Y|N)? \n");//�@���C�������A���a�i�H�}�l�s�C���ΰh�X�C���C 
    ans = getchar();
    getchar();
  } while (ans == 'y' || ans == 'Y');
}
