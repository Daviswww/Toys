// ½sÄ¶¾¹¡GDev C++
// ¤é´Á¡G2016/12/22 


#include <stdio.h>
#include <stdlib.h>
#define N 100

void print_array(int a[], int n) {
     int i;
     for(i = 0; i < n; i++)printf("%d ",a[i]);
     puts("");
}
     
int sum_array(int a[], int n) {
    int i, sum = 0;
    for(i = 0; i < n; i++) sum += a[i];
    return sum;
}
int main(int argc, char *argv[]) {
    int i, a[N];
    for(i = 1; i < argc; i++) a[i - 1] = atoi(argv[i]);
    print_array(a, argc - 1);
    printf("sum = %d\n", sum_array(a, argc - 1));
system("pause");
}
