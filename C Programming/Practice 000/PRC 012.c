#include <stdio.h>
#include <time.h>
#define N 100
#define M 6

void randim_arry(char a[],int n) {
     int i , j;
     for(i = 0; i < n; i++) 
           a[i] = rand()%26 + 'A';
           for(j = 0; j < i; j++) 
           if(a[i] == a[j]) {
             --i;
             break;
             }
             }

void read_arry(char a[],int n) {
     int i;
     for(i = 0; i < n; i++) {
           getchar();
           a[i] = getchar();
           }
           }

void print_arry(char a[],int n) {
    int i;
    for(i = 0; i< n; i++) printf("%-2c",a[i]);
    puts("");
}

int main(void) {
    char guess[N][M];
    int n, i , j;
    
    srand(time(0));
    printf("Enter the number of guesses: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++) read_arry(guess[i] , M);
    for(i = 0; i < n; i++) print_arry(guess[i] , M);
    system("pause");
}
