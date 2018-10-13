#include <stdio.h>
void main(){
    int a[15][15],row,num=25,i,j,k;

    printf("Enter Num of rows");
    scanf("%d",&row);
    for(i=0;i<row;i++){
        for(k=num-2*i;k>=0;k--)
            printf("");

        for(j=0;j<=i;j++){
            if(j==0||i==j){
                a[i][j]=1;
            }else{
                a[i][j]=a[i-1][j-1]+a[i-1][j];
            }
            printf("%6d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
