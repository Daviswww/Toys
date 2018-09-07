// 絪亩竟Dev C++
// ら戳2016/10/28 

#include <stdio.h>

int main(void) {
  int selection, coin , i;
  
  printf("List of Items of fruit Machine:\n");
  printf("1: Apple -  15 2: Watermelon -  30 3: Guava - 15 4: Tomato -  40  5: Pear - 10\n");
  printf("6: Orange - 35 7: Pineapple  -  15 8: Mango - 20 9: Peaches - 15 10: Strawberry - 25\n");
  printf("Selection => ");
  scanf("%d", &selection);
  while ( selection >10) {
  printf("Wrong option! Try again!\n");
  printf("Selection => ");
  scanf("%d", &selection);
}
  printf("Put coins: ");
  scanf("%d", &coin);  //Μ窥 
   
/*
狦窥单基窥 
т窥 
眔坝珇 

讽窥基窥 
肂ぃ才叫穝щ刽
狦肂┪单基窥 
т窥
眔坝珇 
*/ 
  switch(selection) {
    case 1: 
	if ( coin >= 15 ) { 
	  printf("Here's your change: %d\n", coin - 15);
	  printf("You got an Apple.\n");break;
	} 
    while ( coin + i < 15) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 15 )printf("Here's your change: %d\n", coin  + i - 15);
	   } 
	  printf("You got an Apple.\n"); break;
	  
    case 2:
    if ( coin >= 30 ) { 
	  printf("Here's your change: %d\n", coin - 30);
	  printf("You got a Watermelon.\n");break;
	  
	} 
    while ( coin + i < 30) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 30 )printf("Here's your change: %d\n", coin  + i - 30);
	   } 
	   printf("You got a Watermelon.\n"); break;
	  
    case 3:
    if ( coin >= 15 ) { 
	  printf("Here's your change: %d\n", coin - 15);
	  printf("You got a Guava.\n"); break;
	  
	} 
    while ( coin + i < 15) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 15 )printf("Here's your change: %d\n", coin  + i - 15);
	   } 
	  printf("You got an Apple.\n"); break;
	  
    case 4:
    if ( coin >= 40 ) {
	  printf("Here's your change: %d\n", coin - 40);
	  printf("You got a Tomato.\n"); break;
	 
	} 
    while ( coin + i < 40) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 40 )printf("Here's your change: %d\n", coin  + i - 40);
	   } 
	   printf("You got a Tomato.\n"); break;
	  
    case 5:
    if ( coin >= 10 ) {
	  printf("Here's your change: %d\n", coin - 10);
	  printf("You got a Pear.\n"); break;

	} 
    while ( coin + i < 10) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 10 )printf("Here's your change: %d\n", coin  + i - 10);
	   } 
	   printf("You got a Pear.\n"); break;
	  
    case 6:
    if ( coin >= 35 ) {
	  printf("Here's your change: %d\n", coin - 35);
	  printf("You got an Orange.\n"); break;
	  
	} 
    while ( coin + i < 35) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 35 )printf("Here's your change: %d\n", coin  + i - 35);
	   } 
	   printf("You got an Orange.\n"); break;
	  
    case 7:
    if ( coin >= 15 ) { 
	  printf("Here's your change: %d\n", coin - 15);
  	  printf("You got a Pineapple.\n"); break;
	} 
    while ( coin + i < 15) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 15 )printf("Here's your change: %d\n", coin  + i - 15);
	   } 
	   printf("You got a Pineapple.\n"); break;
	  
    case 8:
    if ( coin >= 20 ) { 
	  printf("Here's your change: %d\n", coin - 20);
	  printf("You got a Mango.\n"); break;
 	  
	} 
    while ( coin + i < 20) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 20 )printf("Here's your change: %d\n", coin  + i - 20);
	   } 
	   printf("You got a Mango.\n"); break;
	  
    case 9: 
    if ( coin >= 10 ) { 
	  printf("Here's your change: %d\n", coin - 10);
	  printf("You got a Peaches.\n"); break;
	  
	} 
    while ( coin + i < 10) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 10 )printf("Here's your change: %d\n", coin  + i - 10);
	   } 
	   printf("You got a Peaches.\n"); break;
	  
    case 10:
    if ( coin >= 25 ) { 
	printf("Here's your change: %d\n", coin - 25);
	printf("You got a Strawberry.\n"); break;
	} 
    while ( coin + i < 25) {
	  printf ("肂ぃ才\n");
      printf("Put coins: ");
      scanf("%d", &i);
      if (coin + i >= 25 )printf("Here's your change: %d\n", coin  + i - 25);
	   } 
	   printf("You got a Strawberry.\n"); break;
	   
    default: printf("Wrong option! Try again!\n");
    
}
  
  system("pause");
}
