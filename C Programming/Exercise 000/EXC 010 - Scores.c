// 編譯器：Dev C++
// 日期：2016/11/24

#include <stdio.h>
#define SIZE 100

int main(void) {

  double total; 
  int a[SIZE] = {0}, n, i,qq,ww,ee,rr,tt,yy,uu,oo,pp,zz,q = 0,w = 0,e = 0,r = 0, t = 0,y = 0,u = 0,z = 0,p = 0,o = 0;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter %d scores: ",n);
  
  //紀錄個範圍的成績有多少個 
  for(i = 0; i < n; i++){
    scanf("%d",&a[i]);
    if(a[i] >=0 && a[i] <= 9) q++;
    if(a[i] >=10 && a[i] <= 19) w++;
    if(a[i] >=20 && a[i] <= 29) e++;
    if(a[i] >=30 && a[i] <= 39) r++;
    if(a[i] >=40 && a[i] <= 49) t++;
    if(a[i] >=50 && a[i] <= 59) y++;
    if(a[i] >=60 && a[i] <= 69) u++;
    if(a[i] >=70 && a[i] <= 79) z++;
    if(a[i] >=80 && a[i] <= 89) o++;
    if(a[i] >=90 && a[i] <= 100) p++;
}


    //列印成績 
  printf(" 0 -   9  %d  ", q);
  // 列印'*'號 
  for(qq = 0; qq < q; ++qq){
         printf("%c",'*');
         }puts("");
         
  printf("10 -  19  %d  ", w);
    for(ww = 0; ww < w; ++ww){
         printf("%c",'*');
         }puts("");
         
  printf("20 -  29  %d  ", e);
    for(ee = 0; ee < e; ++ee){
         printf("%c",'*');
         }puts("");

  printf("30 -  39  %d  ", r);
    for(rr = 0; rr < r; ++rr){
         printf("%c",'*');
         }puts("");
         
  printf("40 -  49  %d  ", t);
    for(tt = 0; tt < t; ++tt){
         printf("%c",'*');
         }puts("");
         
  printf("50 -  59  %d  ", y);
    for(yy = 0; yy < y; ++yy){
         printf("%c",'*');
         }puts("");
         
  printf("60 -  69  %d  ", u);
    for(uu = 0; uu < u; ++uu){
         printf("%c",'*');
         }puts("");
         
  printf("70 -  79  %d  ", z);
    for(zz = 0; zz < z; ++zz){
         printf("%c",'*');
         }puts("");
         
  printf("80 -  89  %d  ", o);
    for(oo = 0; oo < o; ++oo){
         printf("%c",'*');
         }puts("");
         
  printf("90 - 100  %d  ", p);  
    for(pp = 0; pp < p; ++pp){
         printf("%c",'*');
         }puts("");
    //平均 
  for(i = 0; i < n; i++) {
    total += a[i];
    }
  printf("The class average is %lf\n",total/n);
  system("pause");
}
