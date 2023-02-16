#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=2,y=3,z=4;
    int *px=&x,*py=&y,*pz=&z;
    printf(" x=%d  y=%d  z=%d  *px=%d  *py=%d   *pz=%d\n",x,y,z,*px,*py,*pz );
    pz=px;
    px=py;
    py=pz;
    printf("________________after swaping______________\n");
     printf(" x=%d  y=%d  z=%d  *px=%d  *py=%d   *pz=%d\n",x,y,z,*px,*py,*pz );

    return 0;
}
