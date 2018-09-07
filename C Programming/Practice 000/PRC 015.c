#include<stdio.h>
#include<stdlib.h>
#define LEN 100

void p(int a[],int n){
     int i;
     for(i = 0; i < n; i++){
           printf("%d ",a[i]);
           }
     puts("");
}

int s(int a[], int n){
    int i, sum = 0;
    for(i = 0; i < n; i++){
          sum += a[i];
          }
    return sum;
}

int main(void) {
    int a[LEN], i ,n;
    char line[LEN], *tok;
    printf("Enter numbers: ");
    fgets(line, LEN, stdin);
    
    tok = strtok(line, " ");
    a[i = 0] = atoi(tok);
    while((tok = strtok(NULL, " ")) != NULL) a[++i] = atoi(tok);
    n = ++i;
    
    p(a, n);
    printf("The sum of all numbers is %d.\n",s(a, n));
    system("pause");
}
