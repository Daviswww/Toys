// �sĶ���GDev C++
// ����G2016/11/11

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define LEN 80

int main(void) {

  char name[LEN] = "", a, b, go, r, c, i, n, m;//A�C�����ơAB���榸�ơAGO����AR��l1���AC��l2�� 

 do{
  srand(time(0));
  printf("=================================================\n");
  printf("The Game of Happy Fortune\n");
  printf("Enter your name: ");
  scanf("%s", name);  //���y�W�r 
  getchar();
  printf("%s, welcome to the game of Happy Fortune.", name);
  char tempname[strlen(name)];//�ƻs�W�r
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
    
  if (go == 'N' || go == 'n') break; //�p�G�ON������̤U���n���n���}�C�� 
	else  //��L�h�~����� 
	  printf("=================================================\n");
    for(i = 1,m = 0,n = 0; i<= a; i++) {  //�j��: i����1 �A m���k�s �A i <= �C������
	  printf("Games %d\n",i );
      printf("Your roll is %d \n",r = rand() % 12+1); //���l 

    //�H�U�O�H���ﶵ�M���ܸ̭�Ū���ӻ�l�[�_�Ӫ��Ʀr 
        switch( r ) {
          case 1: puts("You won NT $100"); m++; break;
          case 2: {
	        puts("Play again!");i--;
	        printf("-------------------------------------------------\n");
	        }continue; break; //�p�G��� Play again! i--�M�᭫�s����@���o�˹C�����ƴN���|�W�[ 
          case 3: puts("Thanks for your play!"); break;
          case 4: puts("You won NT $100"); m++; break;
          case 5: puts("You won NT $200"); n++; break;
          case 6: puts("Thanks for your play!"); break;
          case 7: {
	        puts("Play again!");i--;
	        printf("-------------------------------------------------\n");
  	        }continue; break; //�p�G��� Play again! i--�M�᭫�s����@���o�˹C�����ƴN���|�W�[ 
          case 8: puts("Thanks for your play!"); break;
          case 9: puts("You won NT $200");n++; break;
          case 10: puts("You won NT $100"); m++; break;
          case 11: puts("Thanks for your play!"); m++; break; 
          case 12: puts("You won NT $100"); m++; break; 
          default: puts("Try again!");
        } 
	  
      printf("Play more (Y/N)?"); //�٭n����~ 
      scanf("%c",&go);
	  getchar();
      printf("=================================================\n");
	  if (go == 'Y' || go == 'y') continue;
	    else break;
      
    } 
    printf("���¹C��~�p�G�n�~��Э��s�}�l\n");
    printf("The summary of %s's fortune is as follows:\n", tempname);
    printf("You spent NT $ %d and won NT %d.\n", a * 50, m * 100 + n * 200);
    printf("=================================================\n");
    printf("Quit the game (Y/N)?");  //�n���}�C���� 
    scanf("%c",&go); //���y 
    getchar(); 
} while (go == 'N' || go == 'n'); //��OY�ɱq�Y�}�l���� 
    printf("=================================================\n");
    printf("Thanks for playing!"); //���¹C�� 
return 0;
  system("pause");
}
