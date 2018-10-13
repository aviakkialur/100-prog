//36.) C Program to accept a number and find factorial of given number
#include <stdio.h>
int main()
{
    int i,l,j=1;
    printf("enter the num\n");
    scanf("%d",&l);
    for(i=1;i<=l;i++)
        j=j*i;

    printf("factorial of given num %d\n",j);
    return 0;
}
