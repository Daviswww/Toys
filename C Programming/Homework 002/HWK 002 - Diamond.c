// 編譯器：Dev C++
// 日期：2016/10/28

#include<stdio.h>

            
  int main(void){
  int n,i,j,s;
  printf("Enter the number : ");
  scanf("%d",&n);
/*  
Enter n: 2
 2
121
 2
Enter n: 4
   4
  343
 23432
1234321
 23432
  343
   4
*/
  for(i = n; i > 1; i--)  //上排 
{
    for(s = i; s > 1; s--) printf(" ");  //控制前面空白 
    for(j = i; j <= n; j++) printf("%d",j); //控制左邊數字  
    for(j = n - 1; j >= i; j--) printf("%d",j);  //控制右邊數字 由大到小 
    printf("\n");
}

  for( i = 1; i <= n; i++ ) //下排 
{
    for(s = i; s > 1; s--) printf(" ");  //控制前面空白 
    for(j = i; j <= n; j++) printf("%d",j);        
    for(j = n - 1; j >= i; j--)
    printf("%d",j);
    printf("\n");
}
system("pause");
        }
