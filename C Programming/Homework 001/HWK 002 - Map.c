// �sĶ���GDev C++
// ����G2016/10/28 


#include <stdio.h>
#define LEN 80

int main(void) {
  char direction, go, name[LEN];  
  printf("Welcome to the map game!\n");
  printf("Enter your name: ");
  scanf("%s", name); //���y�W�l 
  getchar();
  printf("Hello, %s!\n", name);
/*
�C�L�ﶵ 
�p�G���y��L��ī�G 
���y��R���ݼ�
���y��M�h�~��U�@�h 
�H������.... 
*/ 
  do {
    printf("Your Choice? (Left/Right/Middle)"); //�C�L�ﶵ 
    scanf("%c", &direction); //���y�� 
    getchar();  //strip off \n

  if (direction == 'L' || direction == 'l') puts("You get Apple!"); 
    else if (direction == 'R' || direction == 'r') puts("You get Guava!"); 
  if (direction == 'M' || direction == 'm') {
    printf("Your Choice? (Left/Right/Middle)");
    scanf("%c", &direction);
	getchar();
  if (direction == 'L' || direction == 'l') puts("You get Mango!");
    else if (direction == 'R' || direction == 'r') puts("You get Pineapple!");
   } 
   
   if (direction == 'M' || direction == 'm') {
    printf("Your Choice? (Left/Right/Middle)");
    scanf("%c", &direction);
	getchar();
  if (direction == 'L' || direction == 'l') puts("You get pear!");
    else if (direction == 'R' || direction == 'r') puts("You get Watermelon!");

   }
  if (direction == 'M' || direction == 'm') {
    printf("Your Choice? (Left/Right/Middle)");
    scanf("%c",&direction);
    getchar();
  if (direction == 'M' || direction == 'm') puts("You get Orange!");
    else if (direction == 'R' || direction == 'r') puts("You get Tomato!"); 
    else if (direction == 'L' || direction == 'l') puts("You get Strawberry!"); 
      printf("Continue to play (Y|N)?\n "); //�C�L�ﶵ 
        scanf("%c", &go); //���y 
        getchar();
        if(go == 'N') break; //�p�G���N�h�פ� 
        else continue; //��L�h���s���� 
         
    }
	 
  } 
  while (go == 'Y' || go == 'y'); //���y��Y���ɭԭ��s���� 
    

  system("pause");
  } 

