#include <stdio.h>

int main(void) {
    double a, b, c;
    
    printf("Enter a, b, c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    
    if(a + b > c && b + c > a && c + a > b) {
         double s = (a+b+c)/2;
         double area = sqrt(s * (s - a) * (s - b) * (s - c));
         printf("Area = %lf\n", area);
}        else printf("The triangle cannot be formed.\n");
    system("pause");
}
