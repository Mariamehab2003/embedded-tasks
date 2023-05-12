#include <stdio.h>
#include <stdlib.h>
#define ll long long
int main()
{
    ll num,one=0,zero=0;
    printf("Enter any num: ");
    scanf("%lld",&num);
    for(ll i=0;i<32;i++){
    if((num>>bnum)&1)
        one++;
    else
        zero++;
    }



    printf("Total zero bit =%lld \nTotal one bit =%lld ",zero,one);
    return 0;
}
