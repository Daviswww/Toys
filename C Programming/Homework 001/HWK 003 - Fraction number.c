// �sĶ���GDev C++
// ����G2016/10/28 


#include <stdio.h>

int main(void) {
  double a, b, c, d;
  char op;

  printf("Enter the complex number expression: ");
  scanf("%lf %lf %c %lf %lf)", &a, &b, &op, &c, &d);  //���y 
/*
Enter the complex number expression: (5 + -6i) + (3 + 4i)
(5 + -6i) + (3 + 4i) = 8 + -2i
Enter the complex number expression: (5 + -6i) - (3 + 4i)
(5 + -6i) - (3 + 4i) = 2 + -10i
Enter the complex number expression: (5 + -6i) * (3 + 4i)
(5 + -6i) * (3 + 4i) = 39 + 2i
Enter the complex number expression: (5 + -6i) / (3 + 4i)
(5 + -6i) / (3 + 4i) = -0.36 + -1.52i

Addition: (a + bi) + (c + di) = (a + c) + (b + d)i
Subtraction: (a + bi) - (c + di) = (a - c) + (b - d)i
Multiplication: (a + bi) (c + di) = (ac - bd) + (bc + ad)i
Division: (a + bi)/(c + di) = ((ac + bd) + (bc - ad)i)/(c2 + d2)
*/
switch(op) {
    case '+': printf("(%lf + %lfi) + (%lf + %lfi) = %lf + %lfi\n", a, c, b, d, a + c, b + d ); break; //���� 
    case '-': printf("(%lf + %lfi) - (%lf + %lfi) = %lf + %lfi\n", a, c, b, d, a - c, b - d ); break;//���� 
    case '*': printf("(%lf + %lfi) * (%lf + %lfi) = %lf + %lfi\n", a, c, b, d, a * c + b * d, b * c + a * d ); break;//���� 
    case '/': if (b != 0) printf("(%lf + %lfi) / (%lf + %lfi) = %lf + %lfi\n", a, c, b, d, (a*c + b*d)/(c*c + d*d) ,(b*c - a*d)/(c*c + d*d));//�p�GB������0�C�L����  
              else printf("Divided by 0.\n"); break;//��L�C�L0 

    default: puts("Wrong Operation!");//�����O���� 
  }

  system("pause");
}

