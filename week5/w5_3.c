#include <stdio.h>
#include <stdlib.h>
int product(int *p,int *pt){
int pro=0;
for(int i=0;i<3;i++){
    pro+=*(p+i)* *(pt+i);
}
return pro;
}
int main()
{
    int a[3]={1,2,3};
    int x[3]={4,5,6};
    printf("%d", product(a,x));
    return 0;
}
