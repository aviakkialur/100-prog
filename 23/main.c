//C Program to print smallest of four no by using ternary operators
#include <stdio.h>
int main()
{
    int array[10],a,b,c,d,big,n,m,i;
    printf("enter thte  4 value\n");
    for(i=1;i<=4;i++)
    {
        printf("\n");
    scanf("%d",&array[i]);
    printf("\n");
    }
a=array[1];
b=array[2];
c=array[3];
d=array[4];

n=a<b?a:b;
m=c<d?c:d;
big=n<m?n:m;
    printf(" the smallest number is  %d\n",big);
    return 0;
}
