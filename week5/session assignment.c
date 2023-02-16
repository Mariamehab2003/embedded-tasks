#include <stdio.h>
#include <stdlib.h>

int main()
{
int *p=(int*)calloc(5,sizeof(int));
for(int i=0;i<5;i++){
    *(p+i)=i+1;
    printf("%d ",*(p+i));
}
printf("\n_________after resize_______\n");
p=(int*)realloc(p,6*sizeof(int));
*(p+5)=7;
for(int i=0;i<6;i++){
    printf("%d ",*(p+i));
}
free(p);
p=NULL;

    return 0;
}
