#include<stdio.h>

int main( ){

    int a[3][3],b[3][3],c[3][3],i,j;



    for(i=0;i<3;i++)

        for(j=0;j<3;j++){

            printf("enter two values for a[%d][%d] &b[%d][%d]:",i,j,i,j);

            scanf("%d%d",&a[i][j],&b[i][j]);

        }

    for(i=0;i<3;i++){

        for(j=0;j<3;j++){

            c[i][j]=a[i][j]-b[i][j];

            printf("%d",c[i][j]);

        }

        printf("\n");

    }
  return 0;
 }
