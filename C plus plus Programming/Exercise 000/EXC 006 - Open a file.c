// 編譯器：Dev C++
// 日期：2017/03/16 

#include <stdio.h>
#define LEN 80
//比大 
int max(double a[], int k){
  double max = 0;
  int i;
  
  for(i = 0; i < k; i++){
    if(a[i] > max)
    max = a[i];
        }
  printf("%.2f",max);
}
//比小 
int min(double a[], int k){
  double min = a[0];
  int i;
  
  for(i = 0; i < k; i++){
    if(a[i] < min)
    min = a[i];
        }
  printf("%.2f",min);
}

int main(void)
{ 
  char name[LEN];
  FILE *fp; // fp = file pointer   
   
  printf("Enter the file name: ");
  scanf("%s", name);
  // fopen opens file. Exit program if unable to create file 
  if ((fp = fopen(name, "r")) == NULL) {
    puts("File could not be opened");
  } 

  else { 
    char line[LEN];
    double a[LEN];
   	int i = 0, k = 0, o = 0, p = 0;
   	char nf, ns;

    while(!feof(fp) && fgets(line, LEN, fp) != NULL) {
      char *sp;
      
      printf("%s",line);
      sp = strtok(line, " \n");
      
      int sum = 0, n = 0;
      
      do {
	    int score = atoi(sp);
	    sum += score;
	    ++n;
      } while((sp = strtok(NULL, " \n")) != NULL);
   	   printf("average = %.2f\n", (double)sum/(n - 2));
       //存平均值 
       a[i] = (double)sum/(n - 2);
       i++;
       k = i;
  	  
	}
	
	puts("");
	printf("Lily Allen has the highest score ");
    max(a,k);
    puts("");
    printf("Amy Winehouse has the highest score ");
    min(a,k);
  } 
  puts("");
  fclose(fp); // fclose closes file 
  system("pause");
}
