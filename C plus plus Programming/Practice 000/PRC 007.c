#include<stdio.h>
#define SIZE 26
#define LEN 80
void countletter(char s[], int count[]){
     int i;
     for(i = 0;s[i] != '\0'; i++) ++count[tolower(s[i])- 'a'];
     }
int main(void){
    int count[SIZE] = {0};
    char line[LEN];
    int i;
    
    printf("Enter a string: ");
    fgets(line, LEN, stdin);
    countletter(line, count);
    for(i = 0; i<SIZE ;i++)
    if(count[i] > 0)printf("%c: %d\n",'a'+i,count[i]);
    system("pause");
}
