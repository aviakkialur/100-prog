//34.) C Program to print prime numbers between 1 to 100
#include <stdio.h>
int main()
{
    int i=1,n,j,p;
    printf("ente the number\n");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        p=0;
        for(i=1;i<=j;i++)
        {
            if(j%i==0)
                p++;
        }
        if(p==2)
        printf("%d\n",j);
    }
    return 0;
}
