#include <stdio.h>

int main()
{
    int i,n,j=0;
    printf("enter the number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            j++;
        }
    }
    if(j==2)
    {
        printf("the given number is prime  \n");
    }

else
{
printf("the given number not a prime\n");
}
return 0;
}
