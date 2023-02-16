#include <stdio.h>

 int sum(int *p,int *pt){

 return *p+*pt;
 }
int main()
{
int x,y;
scanf("%d %d",&x,&y);
 printf("%d",sum(&x,&y));
    return 0;
}
