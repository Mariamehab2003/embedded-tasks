
#include <stdio.h>
#include <stdlib.h>
# define ll long long
int main()
{
  ll num,sum=0;
  printf("Enter any number to find the sum of its digits: ");
  scanf("%lld",&num);
  while(num!=0){
    sum+=num%10;
    num/=10;
  }
   printf(" sum of digits= %lld",sum);
    return 0;
}
