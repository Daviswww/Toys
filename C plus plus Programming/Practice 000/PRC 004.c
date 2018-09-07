#include <stdio.h>
#define SIZE 100
#define LEN 30

int aa(char ne[], double a[]){
    FILE *fg;
    int i = 0;
    if((fg = fopen(ne, "r")) == NULL) {
      puts("File could not be opened");
      return 0;
      }
      else {
           while (!feof(fg)) fscanf (fg,"%lf", &a[i++]);
           fclose(fg);
           return i;
           }
}

void b(double a[], int n) {
     int i;
     for(i = 0; i < n; i++) printf("%f",a[i]);
     puts("");
     }

int max(double a[], int n) {
    int i, max = 0;
    for(i = 1; i < n; i++)
      if(a[i] > a[max]) max = i;
    return max;
}

int min(double a[], int n) {
    int i, min = 0;
    for(i = 1; i < n; i++)
      if(a[i] < a[min]) min = i;
    return min;
}

int main(void) {
    char ne[LEN];
    double a[SIZE];
    int n;
    
    printf("Enter the file name: ");
    scanf("%s", ne);
    n = aa(ne, a);
    b(a, n);
    printf("The maximum is %f. \n", a[max(a, n)]);
    printf("The minimum is %f. \n", a[min(a, n)]);
    
    system("pause");
}
