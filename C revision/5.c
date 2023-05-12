#include <stdio.h>
#include <stdlib.h>
#define ll long long
ll maxx(ll a[4]){
    ll max2=a[0];

    for(ll i=0;i<4;i++){
        if(max2<a[i])
            max2=a[i];
    }
    return max2;
}
ll minn(ll a[4]){

 ll min2=a[0];
    for(ll i=0;i<4;i++){
        if(min2>a[i])
            min2=a[i];
    }
    return min2;

}
int main()
{
    ll a[4];
    printf("Enter 4 num: ");
    for(ll i=0;i<4;i++){
        scanf("%lld",&a[i]);
    }
   ll max1= maxx(a);
   ll min1=minn(a);


    printf("MAX=%lld  MIN=%lld",max1,min1);
    return 0;
}
