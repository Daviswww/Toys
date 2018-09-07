#include<stdio.h>
#define N 900
#define ROW 30
#define COL 30

void random_array(int a[], int n) {
     int i, j;
     for(i =0; i < n; i++){
           a[i] = rand() % n + 1;
           for(j = 0; j < i; j++)
               if(a[i] == a[j]){
                   i--;
                   break;
                   }
     }
     }
void convert_2d_array(int a[], int b[][COL],int m, int n) {
     int i, j, k = 0;
     for(i =0; i < m; i++)
     for(j = 0; j < n; j++) b[i][j] = a[k++];
     }
void print_2d_array(int a[][COL],int m, int n) {
     int i, j;
     for(i =0; i < m; i++){
           for(j = 0; j < n; j++) printf("%4d",a[i][j]);
           puts("");
     }
     }
     
int main(void) {
    int a[N], m , n, b[ROW][COL];
    
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);
    
    srand(time(0));
    random_array(a, m * n);
    convert_2d_array(a, b, m , n);
    print_2d_array(b, m , n);
    
    system("pause");
}
