#include <stdio.h>
int main()
{
    int i,j,k,l;
    for(i=1;i<=5;i++)
    {
        for(j=i;j<=5;j++)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%d",k);
        for(l=i-1;l>=1;l--)
            printf("%d",l);
        printf("\n");
    }
    for(i=5;i>=1;i--)
    {
        for(j=i;j<=5;j++)
            printf(" ");

        for(k=i-1;k>=1;k--)
            printf("%d",k);
        for(l=1;l<=i;l++)
            printf("%d",l);
        printf("\n");
    }

    return 0;
}
