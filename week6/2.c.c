#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[]="mariam 2612 @";
    int c=0;
    int i=0;
    while(a[i]!='\0'){
        c++;
        i++;
    }
    printf("%d",c);
    return 0;
}
