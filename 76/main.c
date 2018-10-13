#include <stdio.h>

int main()
{
    int a[10][10],i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            printf("the matrix elements %d%d",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("the matrix ");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
            if(j==3-1)
                printf("\n\n");
        }
            return 0;
        }
