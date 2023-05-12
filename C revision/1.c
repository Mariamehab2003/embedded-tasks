#include <stdio.h>
#include <stdlib.h>
#define ll long long
int main()
{
    ll n ,zero=0,one=0;

    printf("Enter any num: ");
    scanf("%lld",&n);
    for(ll i=0;i<32;i++){
        if((n>>i)&1)
            one++;
        else
            zero++;
    }
    printf("Total zero bit = %lld\nTotal one bit = %lld ",zero,one);
    return 0;
}
