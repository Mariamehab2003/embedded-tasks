#include <stdio.h>
#include <stdlib.h>
# define ll long long
int main()
{
   char op;
   double a,b;
   printf("Enter an operator (+,-,*,/): ");
   scanf("%c",&op);
    printf("Enter two operands :");
     scanf("%lf %lf",&a,&b);
     switch(op){
 case '+':
    printf("%lf + %lf = %lf",a,b,a+b);
  case '-':
      printf("%lf - %lf = %lf",a,b,a-b);
       case '*':
      printf("%lf * %lf = %lf",a,b,a*b);
       case '/':
      printf("%lf / %lf = %lf",a,b,a/b);




     }
    return 0;
}
