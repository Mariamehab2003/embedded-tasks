#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
#include "delete.h"
#include "binary_search.h"
extern int n;
int main()
{
  int a[]={4,1,9,6,15},b[]={5,8,2,10};
  int arr[]={10,20,30,40,50}, array1[]={4,5,8,9,10,11,7,3,2,1};;
  n = sizeof(arr) / sizeof(arr[0]);
  int pos;
  int sizeA=sizeof(a)/sizeof(a[0]);
    int sizeB=sizeof(b)/sizeof(b[0]);
    int c[sizeA+sizeB];
  bubble_Sort(a,sizeA);
  printf("________________BUBBLE SORT_____________\n\n");
  for(int i=0;i<sizeA;i++){
    printf("%d ",a[i]);
  }
  Merge_Sort(a,sizeA);
  Merge_Sort(b,sizeB);
  Merge(a,sizeA,b,sizeB,c,sizeA+sizeB);
   printf("\n\n________________MERGE SORT_____________\n\n");
  for(int i=0;i<sizeA+sizeB;i++)
    printf("%d ",c[i]);
    Quick_Sort(array1,0,9);
     printf("\n\n________________QUICK SORT_____________\n\n");
  for(int i=0;i<10;i++){
    printf("%d ",array1[i]);
  }
  printf("\n\n________________BINARY_SEARCH_____________\n\n");
    printf("\nIN INDEX   %d",BinarySearch( a,sizeA,9));

 printf("\n\n_______________________________________________________\n\n");
  printf("\n\nEnter the position of the element to delete: ");
  scanf("%d", &pos);

 if(!deleteElement(arr, pos))
  printf("\nError: Invalid delete position.\n");
  else{
  printf("\n\nThe array after deleting the element is: ");
  for (int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  }
int array[]={4,5,8,9,10,11,7,3,2,1};
   int max=Find_max_element(array,0,9);
   printf("\n\nthe maximum element in array is= %d",max);
    return 0;
}
