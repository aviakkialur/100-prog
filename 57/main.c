//matrix mul
#include <stdio.h>
int main()
{
    int a[10][10],r1,c1,b[10][10],r2,c2,result[10][10],i,j,k;
    printf("enter the rows and colums of 1st matrix\n");
    scanf("%d %d",&r1,&c1);
    printf("enter the rows and colums of 2nd matrix\n");
    scanf("%d %d",&r2,&c2);
  while(c1!=r2){
        printf("error\n");
        printf("enter the rows and colums of 1st matrix\n");
        scanf("%d %d",&r1,&c1);
        printf("enter the rows and colums of 2nd matrix\n");
        scanf("%d %d",&r2,&c2);
    }
        printf("enter the 1st matrix: \n");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
            {
                printf("enter the elements a:%d%d: ",i+1,j+1);
                scanf("%d",&a[i][j]);
            }
        printf("enter the 2nd matrix; \n");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
        {
            printf("enter the elements b%d%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
for(i=0;i<r1;i++)
    for(j=0;j<c2;j++)
    for(k=0;k<c1;k++)
{
    result[i][j]+=a[i][k]*b[k][j];
}


printf("\nOutput Matrix:\n");
    for(i=0; i<r1; ++i)
        for(j=0; j<c2; ++j)
        {
            printf("%d  ", result[i][j]);
            if(j == c2-1)
                printf("\n\n");
        }
    return 0;
}
