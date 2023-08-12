#include "binary_search.h"
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
int Find_max_element(int a[],int low,int high){//recursive

if(low>high)return -1;
int mid=low+(high-low)/2;
if(a[mid-1]<a[mid]&&a[mid]>a[mid+1])
    return a[mid];
else if(a[mid+1]>a[mid])
      return Find_max_element(a,mid+1,high);

else
       return Find_max_element(a,low,mid-1);
}
