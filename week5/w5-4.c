#include <stdio.h>
#include <stdlib.h>
void sortt(int *p,int len){

for(int i=0;i<len;i++){
    for(int j=0;j<len-1;j++){
        if(*(p+j)>*(p+j+1)){
            int z=*(p+j);
            *(p+j)=*(p+j+1);
            *(p+j+1)=z;
        }
    }

}
 for(int i=0;i<len;i++){
        printf("%d ",*(p+i));
    }
}
int main()
{
    int a[]={5,2,1,8,3,7,9,4,6};
    sortt(a,9);
    return 0;
}
