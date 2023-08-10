#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

int main()
{
  int a[]={4,1,9,6,15},b[]={5,8,2,10};

  int sizeA=sizeof(a)/sizeof(a[0]);
    int sizeB=sizeof(b)/sizeof(b[0]);
    int c[sizeA+sizeB];
  bubble_Sort(a,sizeA);
  printf("________________BUBBLE SORT_____________\n");
  for(int i=0;i<sizeA;i++){
    printf("%d ",a[i]);
  }
  Merge_Sort(a,sizeA);
  Merge_Sort(b,sizeB);
  Merge(a,sizeA,b,sizeB,c,sizeA+sizeB);
   printf("\n________________MERGE SORT_____________\n");
  for(int i=0;i<sizeA+sizeB;i++)
    printf("%d ",c[i]);

    return 0;
}
