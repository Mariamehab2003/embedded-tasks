#include <stdio.h>
#include <stdlib.h>
#define ll long long
void even_odd(ll a[100000],ll *even,ll *odd, ll size){
    ll max2=a[0];

    for(ll i=0;i<size;i++){
        if(a[i]%2==0)
            (*even)+=1;
            else
                (*odd)+=1;
    }

}

int main()
{
    ll a[100000],even=0,odd=0,size;
    printf("Enter size of array: ");
    scanf("%lld",&size);
     printf("Enter %lld elements in  array: ",size);
    for(ll i=0;i<size;i++){
        scanf("%lld",&a[i]);
    }
   even_odd(a,&even,&odd,size);


    printf("Total even elements=%lld \n Total odd elements=%lld ",even,odd);
    return 0;
}
