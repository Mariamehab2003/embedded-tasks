#include <stdio.h>
#include <stdlib.h>
int repeat (int a[], int length){
    int x;
for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            if(a[i]==a[j]&&i!=j){
                x=a[i];
            }
        }
    }
return x;

}
int main()
{
    int a[6]={4,5,7,8,5,1};
     printf("The repeated num = %d",repeat(a,6));

        return 0;
}
