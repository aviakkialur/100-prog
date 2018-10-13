#include <stdio.h>

int main()
{

    int i=1,j,sum,k=0;
    for(j=0;j<=15;j++)
    {
    sum=i+k;
    printf("%d,",sum);

    k=i;
    i=sum;
    sum++;
    }
    return 0;
}
