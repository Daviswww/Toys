
#include <stdio.h>

int main( void )
{
    unsigned int counter, n;
    int grade, total;
    double average;
    
    total = 0;
    counter = 1;
    
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    while ( counter <= n ) {
      do{
        printf("counter = %d\n", counter);
        printf("Enter grade: ");
        scanf("%d",&grade );
        } while(grade < 0 || grade > 100);
        total = total + grade;
        counter = counter + 1;
      }
      
      average = (double) total / n ;
      printf("Class average is %lf\n", average );
      system("pause");
}
