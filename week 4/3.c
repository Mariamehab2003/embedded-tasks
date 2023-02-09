#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[]={1,5,8,5,7,3,2,4,1,6,2};
    int c=0;
    printf("Unique Elements: ");
    for(int i =0;i<11;i++){
        for(int j=10;j>=0;j--){

            if(arr[i]==arr[j]&&i!=j){
                    arr[j]=0;

        }
        }

    }
    for(int i=0;i<11;i++){
        if(arr[i]==0)
            continue;
        else
            printf("%d ",arr[i]);
    }
    return 0;
}

