#include<stdio.h>
int main()
{
    int i,j,k,l,x=0;
    char a[3][3][3][3];
    for (i=0;i<=3;i++)
    {
        for (j=0;j<3;j++)
        {
            for (k=0;k<3;k++)
            {
                for (l=0;l<3;l++)
                {
                   a[3][3][3][3]=x;
                    printf("%d\t",a[3][3][3][3]);
                    x++;
                }
                printf("\n");

            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
