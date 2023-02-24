#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char a[100];
    gets(a);
    char c;
    scanf("%c",&c);
    for(int i=0;i<strlen(a);i++){
        if(a[i]==c){
            printf("'%c'is found at index %d",c,i);
            break;
        }
    }
    return 0;
}
