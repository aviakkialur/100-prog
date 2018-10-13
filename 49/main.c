#include <stdio.h>
int main()
{
    int a[10][10],i,j;
    printf("enter the 1st matrix: \n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
        {
            printf("enter the elements a:%d%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("\nOutput Matrix:\n");
        for(i=0; i<3; ++i)
            for(j=0; j<3; ++j)
            {
                printf("%d  ",a[i][j]);
                if(j == 3-1)
                    printf("\n\n");
            }
    return 0;
}

