#include <stdio.h>
#include <stdlib.h>

int main()
{
     int n,c;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int a[n];
     printf("Enter the elelments of array : ");
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);

}
for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
    if(a[j]>a[j+1])
    {
        int x=a[j];
        a[j]=a[j+1];
        a[j+1]=x;
    }


}
}
printf("the second largest element in the array :  %d",a[n-2]);

    return 0;
}
