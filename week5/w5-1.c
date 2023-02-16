#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=10;
printf("%d\n",i);
int *p=&i;
*p=20;
printf("%d\n",i);
    return 0;
}
