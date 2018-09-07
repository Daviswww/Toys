// 編譯器：Dev C++
// 日期：2016/10/28 


#include <stdio.h>
#define LEN 80

int main(void) {
  char direction, go, name[LEN];  
  printf("Welcome to the map game!\n");
  printf("Enter your name: ");
  scanf("%s", name); //掃描名子 
  getchar();
  printf("Hello, %s!\n", name);
/*
列印選項 
如果掃描到L拿蘋果 
掃描到R拿芭樂
掃描到M則繼續下一層 
以此類推.... 
*/ 
  do {
    printf("Your Choice? (Left/Right/Middle)"); //列印選項 
    scanf("%c", &direction); //掃描路 
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
      printf("Continue to play (Y|N)?\n "); //列印選項 
        scanf("%c", &go); //掃描 
        getchar();
        if(go == 'N') break; //如果選擇N則終止 
        else continue; //其他則重新執行 
         
    }
	 
  } 
  while (go == 'Y' || go == 'y'); //當掃描到Y的時候重新執行 
    

  system("pause");
  } 

