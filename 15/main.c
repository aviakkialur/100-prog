//C Program to print fibonacci series.
#include <stdio.h>
int main()
{
    int i=0,sum,j=0,k=1,n;
    printf("enter the reqired value\n");
            scanf("%d",&n);
             printf("\n");
    for(i=0;i<=n;i++)
    {
    sum=k+j;
    printf("%d \n",sum);
    k=j;
  j=sum;
    sum++;
}
return 0;
}
