#include <stdio.h>
#include <stdlib.h>
int BinarySearch(int a[],int size, int x)//iterative
{
    int low=0,high=size-1;

    while(low<=high)
    {
       int mid=low+(high-low)/2;
        if(x==a[mid])
            return mid;
        else if(x<a[mid])
            high=mid-1;
        else
            low=mid+1;

    }
    return -1;
}

int Binary_Search(int a[],int low,int high, int x){//recursive

if(low>high)return -1;
int mid=low+(high-low)/2;
if(x==a[mid])
    return mid;
else if(x<a[mid])
    return Binary_Search(a,low,mid-1,x);
else
      return Binary_Search(a,mid+1,high,x);
}
int main()
{
    int a[]={18,19,20,1,4,12,17};
    printf("%d",BinarySearch( a,7,20));
    return 0;
}
