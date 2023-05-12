#include <stdio.h>
#include <stdlib.h>
# define ll long long
int main()
{


     ll num,ans=1,pow;
  printf("Enter the number : ");
  scanf("%lld",&num);
  printf("Enter the power : ");
  scanf("%lld",&pow);
  for(ll i=0;i<pow;i++){
    ans*=num;
  }
   printf("Answer = %lld",ans);

    return 0;
}
