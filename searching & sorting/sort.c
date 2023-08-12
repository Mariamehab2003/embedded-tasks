#include "sort.h"
void Selection_Sort(int a[],int n){//O(n^2)
for(int i=0;i<n-1;i++){
    int iMin=i;
    for( int j=i+1;j<n;j++){
        if(a[j]<a[iMin])
            iMin=j;
    }
    int temp=a[i];
    a[i]=a[iMin];
    a[iMin]=temp;

}

}

void bubble_Sort(int a[],int n){//O(n^2)
for(int k=1;k<n;k++){
    int flag=0;
    for(int i=0;i<n-k;i++){
        if(a[i]>a[i+1]){
            flag=1;
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }

    }
     if(flag==0)
            break;


}

}
void Insertion_Sort(int a[],int n){//O(n^2)
for(int i=1;i<n;i++){
    int value=a[i];
    int hole=i;
    while(hole>0&&a[hole-1]>value){
        a[hole]=a[hole-1];
        hole=hole-1;
    }
    a[hole]=value;
}





}
void Merge(int l[],int nl,int r[],int nr,int a[],int n){//l ,r sub sorted array
int i=0,j=0,k=0;
while(i<nl&&j<nr){
    if(l[i]<=r[j]){
        a[k]=l[i];
        i++;

    }
    else{
        a[k]=r[j];
        j++;

    }

 k++;
}
while(i<nl){
    a[k]=l[i];
        i++;
        k++;
}
while(j<nr){
    a[k]=r[j];
        j++;
        k++;
}
}
void Merge_Sort(int a[],int n){//O(n log n)
if(n<2) return;
int mid=n/2;
int left[mid],right[n-mid];
for(int i=0;i<mid;i++){
    left[i]=a[i];
}
for(int j=mid;j<n;j++)
    right[j-mid]=a[j];
Merge_Sort(left,mid);
Merge_Sort(right,n-mid);
Merge(left,mid,right,n-mid,a,n);
}
int partition (int a[],int start,int end){
int pivot=a[end],partition_index=start;
for(int i=start;i<end;i++){
    if(a[i]<=pivot){
            int temp=a[i];
    a[i]=a[partition_index];
    a[partition_index]=temp;
    partition_index++;

    }
}

int temp1=a[end];
a[end]= a[partition_index];
 a[partition_index]=temp1;
 return partition_index;

}
void Quick_Sort(int a[],int start,int end){
if(start<end){


    int partitionindex=partition(a,start,end);
    Quick_Sort(a,start,partitionindex-1);
      Quick_Sort(a,partitionindex+1,end);

}



}
