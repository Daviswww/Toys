// �sĶ���GDev C++
// ����G2016/10/28

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
  for(i = n; i > 1; i--)  //�W�� 
{
    for(s = i; s > 1; s--) printf(" ");  //����e���ť� 
    for(j = i; j <= n; j++) printf("%d",j); //�����Ʀr  
    for(j = n - 1; j >= i; j--) printf("%d",j);  //����k��Ʀr �Ѥj��p 
    printf("\n");
}

  for( i = 1; i <= n; i++ ) //�U�� 
{
    for(s = i; s > 1; s--) printf(" ");  //����e���ť� 
    for(j = i; j <= n; j++) printf("%d",j);        
    for(j = n - 1; j >= i; j--)
    printf("%d",j);
    printf("\n");
}
system("pause");
        }
