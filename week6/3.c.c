#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
    char *s="codeforces";
    for(int i=strlen(s)-1;i>=0;i--){
        printf("%c",s[i]);
    }
    return 0;
}
