#include <stdio.h>
#define M 100
#define N 200

void read_array(double a[][N], int m, int n) {
     int i ,j;
     printf("Enter an array of %d by %d: \n", m ,n);
     for(i = 0; i < m; i++)
     for(j = 0; j < n; j++) scanf("%lf",&a[i][j]);
     }

void print_array(double a[][N], int m, int n) {
     int i ,j;
     for(i = 0; i < m; i++){
     for(j = 0; j < n; j++) printf("%8.4f",a[i][j]);
     puts("");
     }
     }

double max_array(double a[][N], int m, int n) {
     int i ,j;
     double max = a[0][0];
     for(i = 0; i < m; i++)
     for(j = 0; j < n; j++) if (a[i][j] > max) max = a[i][j];
     return max;
     }

double min_array(double a[][N], int m, int n) {
     int i ,j;
     double min = a[0][0];
     for(i = 0; i < m; i++)
     for(j = 0; j < n; j++) if (a[i][j] < min) min = a[i][j];
     return min;
     }

double avg_array(double a[][N], int m, int n) {
     int i ,j;
     double total = 0;
     for(i = 0; i < m; i++)
     for(j = 0; j < n; j++) total += a[i][j];
     return total / (m * n);
     }
     
int main(void) {
    int m, n;
    double a[M][N] = {0};
    
    printf("Enter m , n: ");
    scanf("%d%d",&m ,&n);
    
    read_array(a, m, n);
    print_array(a, m, n);
    printf("The maximum of the array is %f.\n", max_array(a,m,n));
    printf("The maximum of the array is %f.\n", min_array(a,m,n));
    printf("The maximum of the array is %f.\n", avg_array(a,m,n));
    
    system("pause");
}
