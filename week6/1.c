#include <stdio.h>
#include <stdlib.h>


int main()
{
    char s[]="hello";
    for(int i=0;i<strlen(s);i++){
        s[i]=s[i]-32;
        printf("%c",s[i]);
    }

    return 0;
}
