#include <stdio.h>
#include <stdlib.h>
#define ll long long
void max_min(ll *pa,ll *maxx,ll *minn,ll size){
*maxx=*pa;
*minn=*pa;
for(ll i=0;i<size;i++){
    if(*maxx<*(pa+i))
        *maxx=*(pa+i);
    if(*minn>*(pa+i))
        *minn=*(pa+i);
}

}
int main()
{
    ll a[100000],maxx,minn,size;
    printf("Enter size of array: ");
    scanf("%lld",&size);
     printf("Enter %lld elements in  array: ",size);
    for(ll i=0;i<size;i++){
        scanf("%lld",&a[i]);
    }
  max_min(a,&maxx,&minn,size);



    printf("Minimum element in array=%lld \nMaximum element in array=%lld ",minn,maxx);
    return 0;
}
