// C Program to check whether a given number is perfect or not.
#include <stdio.h>

int main()
{
    int i,n,sum,j=0;
    printf("enter the value");
    scanf("%d",&n);
        i=1;
        sum=0;
        while(i<n){
            if(n%i==0)
                j++;
            sum=sum+i;
            i++;
        }
        if(sum==n){
            printf(" it is perfect number %d\n",n);
        }
        else
        {
            printf("it is not\n ");
        }
        if(j==2)
        {
            printf("the given number is prime");
        }
        else
        {
            printf("the given ")
        }
    return 0;
}
