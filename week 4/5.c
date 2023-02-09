#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5][5];
    int rows=0,cols=0;

    for(int i=0;i<5;i++){
         printf("Enter ROW %d: ",i+1);
        for(int j=0;j<5;j++){
            scanf("%d ",&a[i][j]);

        }
    }
    printf("The Sum of rows : ");
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            rows+=a[i][j];

        }
        printf("%d",rows);
        rows=0;
    }
     printf("\n The Sum of cols : ");
    for(int j=0;j<5;j++){
        for(int i=0;i<5;i++){
                  cols+=a[i][j];



        }
        printf("%d ",cols);
        cols=0;
    }


    return 0;
}
